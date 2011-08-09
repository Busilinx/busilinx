Drupal.behaviors.civieventdiscountBehavior = function (context) {
  // Generate a random string of characters. Alert the user if the code already exists.
  $("#generate-code").click(function() {
    var chars = $("#edit-code-chars");
    var len = $("#edit-code-chars-len");
    var codes = $("#edit-code-all");

    code = randomString(chars.val(), len.val());
    if (jQuery.inArray(code, codes) != '-1') {
      $("#generate-code-error").text("This code already exists, please try again.");
      $("#generate-code-error").show();
    } else {
      $("#edit-code").val(code);
      $("#generate-code-error").hide();
    }

    return false;
  });

  // Yanked from http://stackoverflow.com/questions/2477862/jquery-password-generator
  function randomString(chars, len) {
    var i = 0;
    var str = "";
    while (i <= len) {
      $max = chars.length - 1;
      $num = Math.floor(Math.random() * $max);
      $temp = chars.substr($num, 1);
      str += $temp;
      i++;
    }

    return str;
  }
}
