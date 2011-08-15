<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:29
         compiled from CRM/common/enableDisable.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/common/enableDisable.tpl', 35, false),array('function', 'crmURL', 'CRM/common/enableDisable.tpl', 110, false),array('function', 'crmKey', 'CRM/common/enableDisable.tpl', 158, false),)), $this); ?>
<div id="enableDisableStatusMsg" class="success-status" style="display:none;"></div>
<?php echo '
<script type="text/javascript">
function modifyLinkAttributes( recordID, op, recordBAO, reloadPage, rowId ) {
    //we changed record from enable to disable
    if ( op == \'enable-disable\' ) {
        var fieldID     = \'#\' + rowId + \'_\' + recordID + " a." + "disable-action";
        var operation   = "disable-enable";
        var htmlContent = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Enable<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
        var newClass    = \'action-item enable-action\';
        var newTitle    = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Enable<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
        var newText     = '; ?>
' <?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>No<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> '<?php echo ';
    } else if ( op == \'disable-enable\' ) {
        var fieldID     = \'#\' + rowId + \'_\' + recordID + " a." + "enable-action";
        var operation   = "enable-disable";
        var htmlContent = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Disable<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
        var newClass    = \'action-item disable-action\';
        var newTitle    = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Disable<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
        var newText     = '; ?>
' <?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Yes<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> '<?php echo ';
    }

    //change html
    cj( fieldID ).html( htmlContent ); 	

    //change title
    cj( fieldID ).attr( \'title\', newTitle );

    //need to update js - change op from js to new allow operation. 
    //set updated js
    var newAction = \'enableDisable( \' + recordID    + \',"\'  + 
                                        recordBAO   + \'","\' + 
                                        operation   + \'","\' + 
                                        reloadPage  + \'","\' + 
                                        rowId       + \'"\'   + \' );\';
    cj( fieldID ).attr("onClick", newAction );
    
    //set the updated status
    var fieldStatus = \'#\' + rowId + \'_\' + recordID + "_status";
    cj( fieldStatus ).text( newText );

    //finally change class to enable-action.
    cj( fieldID ).attr( \'class\', newClass );
}

function modifySelectorRow( recordID, op, rowId ) {
    var elementID =  \'#\' + rowId + \'_\' + recordID;
    if ( op == "disable-enable" ) {
        cj( elementID ).removeClass("disabled");
    } else if ( op == "enable-disable" )  {
        //we are disabling record.
        cj( elementID ).addClass("disabled");
    }
}

function hideEnableDisableStatusMsg( ) {
    cj( \'#enableDisableStatusMsg\' ).hide( );
}

cj( \'#enableDisableStatusMsg\' ).hide( );
function enableDisable( recordID, recordBAO, op, reloadPage, rowId ) {

	//CRM-7487 -need to have unique row id, 
	//for multiple selectors on same page.
	if ( ! rowId ) rowId = \'row\';

    	if ( op == \'enable-disable\' ) {
       	   var st = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Disable Record<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
    	} else if ( op == \'disable-enable\' ) {
       	   var st = '; ?>
'<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Enable Record<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
    	}

	cj("#enableDisableStatusMsg").show( );
	cj("#enableDisableStatusMsg").dialog({
		title: st,
		modal: true,
		bgiframe: true,
		position: "right",
		overlay: { 
			opacity: 0.5, 
			background: "black" 
		},

		open:function() {
       		        var postUrl = '; ?>
"<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/ajax/statusmsg','h' => 0), $this);?>
"<?php echo ';
		        cj.post( postUrl, { recordID: recordID, recordBAO: recordBAO, op: op  }, function( statusMessage ) {
			        if ( statusMessage.status ) {
 			            cj( \'#enableDisableStatusMsg\' ).show( ).html( statusMessage.status );
       	     		        }
				if ( statusMessage.show == "noButton" ) {
   				    cj(\'#enableDisableStatusMsg\').dialog(\'option\', \'position\', "centre");
				    cj(\'#enableDisableStatusMsg\').data("width.dialog", 630);
				    cj.extend( cj.ui.dialog.prototype, {
			               	      \'removebutton\': function(buttonName) {
				                      var buttons = this.element.dialog(\'option\', \'buttons\');
						      delete buttons[buttonName];
						      this.element.dialog(\'option\', \'buttons\', buttons);
        				      }
				    });
				    cj(\'#enableDisableStatusMsg\').dialog(\'removebutton\', \'Cancel\'); 
				    cj(\'#enableDisableStatusMsg\').dialog(\'removebutton\', \'OK\'); 
       			    }  
	       	        }, \'json\' );
		},
	
		buttons: { 
			"Cancel": function() { 
				cj(this).dialog("close"); 
			},
			"OK": function() { 	    
			        saveEnableDisable( recordID, recordBAO, op, reloadPage, rowId );
			        cj(this).dialog("close");			        
			}
		} 
	});
}

//check is server properly processed post.
var responseFromServer = false; 

function noServerResponse( ) {
    if ( !responseFromServer ) { 
        var serverError =  \''; ?>
<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>There is no response from server therefore selected record is not updated.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php echo '\'  + \'&nbsp;&nbsp;<a href="javascript:hideEnableDisableStatusMsg();"><img title="'; ?>
<?php $this->_tag_stack[] = array('ts', array('escape' => 'js')); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>close<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php echo '" src="\' +resourceBase+\'i/close.png"/></a>\';
        cj( \'#enableDisableStatusMsg\' ).show( ).html( serverError ); 
    }
}

function saveEnableDisable( recordID, recordBAO, op, reloadPage, rowId ) {
    cj( \'#enableDisableStatusMsg\' ).hide( );
    var postUrl = '; ?>
"<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/ajax/ed','h' => 0), $this);?>
"<?php echo ';

    //post request and get response
    cj.post( postUrl, { recordID: recordID, recordBAO: recordBAO, op:op, key: '; ?>
"<?php echo smarty_function_crmKey(array('name' => 'civicrm/ajax/ed'), $this);?>
"<?php echo '  }, function( html ){
        responseFromServer = true;      
       
        //this is custom status set when record update success.
        if ( html.status == \'record-updated-success\' ) {
           
            if ( reloadPage ) {
                document.location.reload( );
            }
            //change row class and show/hide action links.
            modifySelectorRow( recordID, op, rowId );

            //modify action link html        
            modifyLinkAttributes( recordID, op, recordBAO, reloadPage, rowId ); 
        } 

            //cj( \'#enableDisableStatusMsg\' ).show( ).html( successMsg );
        }, \'json\' );

        //if no response from server give message to user.
        setTimeout( "noServerResponse( )", 1500 ); 
    }
    </script>
    '; ?>
