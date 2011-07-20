// $Id: dart.js,v 1.11 2010/09/25 03:35:20 bleen18 Exp $

/**
 * Create a DART object to handle tagging functionality
 */
Drupal.DART = {};

/**
 * Using document.write, add a DART tag to the page
 */
Drupal.DART.tag = function (pos, sz, tag) {
	
  var options = 'type="text/javascript"';
  var tagname = 'script';
  if(tag.options.method == 'adi') {
	tagname = 'iframe';		
	options = 'frameborder="0" scrolling="no" width="' + sz.split("x")[0] + '" height="' + sz.split("x")[1] + '"';		
  }
  ad  = '<' + tagname + ' ' + options + ' src="';
  ad += Drupal.DART.dart_url + "/" + tag.options.method + "/";
  ad += tag.prefix + '.' + tag.site + "/" + tag.zone + ";";
  ad += this.keyVal('pos', pos, false);
  ad += this.keyVal('sz', sz, false);
  ad += this.keyVals(tag.options.keyvals);

  // If ord exists, add it last.
  if (typeof Drupal.DART.ord !== "undefined") {
    ad += this.keyVal('ord', Drupal.DART.ord, true);
  }

  ad += '"></' + tagname + '>';

  document.write(ad);
  //console.log('-----------------'+pos+'------------------');
  //console.log(tag);
}

/**
 * Format a key|val pair into a dart tag key|val pair.
 */
Drupal.DART.keyVal = function(key, val, useEval) {
  kvp  = key + "=";
  kvp += useEval ? eval(val) : val;
  kvp += key == "ord" ? "?" : ";";
  return(kvp);
}

/**
 * Loop through an object and create kay|val pairs.
 * 
 * @param vals
 *   an object in this form:
 *   {
 *     key1 : {val:'foo', eval:true},
 *     key2 : {val:'bar', eval:false},
 *     key3 : {val:'foobar', eval:true}
 *   }
 */
Drupal.DART.keyVals = function(vals) {
  var ad = '';
  for(var key in vals) {
    value = vals[key];
    for(var val in value) {
      v = value[val];
      ad += this.keyVal(key, v['val'], v['eval']);
    }
  }
  return ad;
}
