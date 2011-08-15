<?php /* Smarty version 2.6.26, created on 2011-06-06 18:54:37
         compiled from CRM/Contact/Form/Task/PDFLetterCommon.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'help', 'CRM/Contact/Form/Task/PDFLetterCommon.tpl', 45, false),array('function', 'crmURL', 'CRM/Contact/Form/Task/PDFLetterCommon.tpl', 209, false),array('block', 'ts', 'CRM/Contact/Form/Task/PDFLetterCommon.tpl', 87, false),array('modifier', 'crmReplace', 'CRM/Contact/Form/Task/PDFLetterCommon.tpl', 111, false),)), $this); ?>
<?php if ($this->_tpl_vars['form']['template']['html']): ?>
<table class="form-layout-compressed">
    <tr>
        <td class="label-left"><?php echo $this->_tpl_vars['form']['template']['label']; ?>
</td>
	    <td><?php echo $this->_tpl_vars['form']['template']['html']; ?>
</td>
    </tr>
</table>
<?php endif; ?>

<div class="crm-accordion-wrapper crm-accordion_title-accordion crm-accordion-closed">
    <div class="crm-accordion-header">
        <div class="icon crm-accordion-pointer"></div> 
        <?php echo $this->_tpl_vars['form']['pdf_format_header']['html']; ?>

    </div>
    <div class="crm-accordion-body">
      <div class="crm-block crm-form-block crm-pdf-format-form-block">
		<table class="form-layout-compressed">
			<tr>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['format_id']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['format_id']['html']; ?>
<?php echo smarty_function_help(array('id' => "id-pdf-format",'file' => "CRM/Contact/Form/Task/PDFLetterCommon.hlp"), $this);?>
</td>
				<td colspan="2">&nbsp;</td>
            </tr>
			<tr>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['paper_size']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['paper_size']['html']; ?>
</td>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['orientation']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['orientation']['html']; ?>
</td>
			</tr>
			<tr>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['metric']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['metric']['html']; ?>
</td>
				<td colspan="2">&nbsp;</td>
			</tr>
			<tr>
				<td><?php echo $this->_tpl_vars['form']['paper_dimensions']['html']; ?>
</td><td id="paper_dimensions">&nbsp;</td>
				<td colspan="2">&nbsp;</td>
			</tr>
			<tr>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['margin_top']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['margin_top']['html']; ?>
</td>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['margin_bottom']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['margin_bottom']['html']; ?>
</td>
			</tr>
			<tr>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['margin_left']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['margin_left']['html']; ?>
</td>
				<td class="label-left"><?php echo $this->_tpl_vars['form']['margin_right']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['margin_right']['html']; ?>
</td>
			</tr>
		</table>
        <div id="bindFormat"><?php echo $this->_tpl_vars['form']['bind_format']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['bind_format']['label']; ?>
</div>
        <div id="updateFormat" style="display: none"><?php echo $this->_tpl_vars['form']['update_format']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['update_format']['label']; ?>
</div>
      </div>
	</div>
</div>

<div class="crm-accordion-wrapper crm-html_email-accordion crm-accordion-open">
<div class="crm-accordion-header">
    <div class="icon crm-accordion-pointer"></div>
    <?php echo $this->_tpl_vars['form']['html_message']['label']; ?>

</div><!-- /.crm-accordion-header -->
 <div class="crm-accordion-body">
  <?php if ($this->_tpl_vars['action'] != 4): ?>
  <span class="helpIcon" id="helphtml">
	<a href="#" onClick="return showToken('Html', 1);"><?php echo $this->_tpl_vars['form']['token1']['label']; ?>
</a>
	<?php echo smarty_function_help(array('id' => "id-token-html",'file' => "CRM/Contact/Form/Task/Email.hlp"), $this);?>

	<div id="tokenHtml" style="display:none;">
	    <input style="border:1px solid #999999;" type="text" id="filter1" size="20" name="filter1" onkeyup="filter(this, 1)"/><br />
	    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Begin typing to filter list of tokens<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span><br/>
	    <?php echo $this->_tpl_vars['form']['token1']['html']; ?>

	</div>
  </span>
  <?php endif; ?>
    <div class="clear"></div>
    <div class='html'>
	<?php if ($this->_tpl_vars['editor'] == 'textarea'): ?>
	    <div class="help description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>NOTE: If you are composing HTML-formatted messages, you may want to enable a Rich Text (WYSIWYG) editor (Administer &raquo; Configure &raquo; Global Settings &raquo; Site Preferences).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></div>
	<?php endif; ?>
	<?php echo $this->_tpl_vars['form']['html_message']['html']; ?>
<br />
    </div>

<div id="editMessageDetails">
    <div id="updateDetails" >
        <?php echo $this->_tpl_vars['form']['updateTemplate']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['updateTemplate']['label']; ?>

    </div>
    <div>
        <?php echo $this->_tpl_vars['form']['saveTemplate']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['saveTemplate']['label']; ?>

    </div>
</div>

<div id="saveDetails" class="section">
    <div class="label"><?php echo $this->_tpl_vars['form']['saveTemplateName']['label']; ?>
</div>
    <div class="content"><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['saveTemplateName']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge') : smarty_modifier_crmReplace($_tmp, 'class', 'huge')); ?>
</div>
</div>

  </div><!-- /.crm-accordion-body -->
</div><!-- /.crm-accordion-wrapper -->

<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Mailing/Form/InsertTokens.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

<?php echo '
<script type="text/javascript">
cj(function() {
    cj().crmaccordions(); 
});

var currentWidth;
var currentHeight;
var currentMetric = document.getElementById(\'metric\').value;
showBindFormatChkBox();
selectPaper( document.getElementById(\'paper_size\').value );

function tokenReplHtml ( )
{
    var token1 = cj("#token1").val( )[0];
    var editor = '; ?>
"<?php echo $this->_tpl_vars['editor']; ?>
"<?php echo ';
    if ( editor == "tinymce" ) {
        var content= tinyMCE.get(\'html_message\').getContent() +token1;
        tinyMCE.get(\'html_message\').setContent(content);
    } else if ( editor == "joomlaeditor" ) { 
        tinyMCE.execCommand(\'mceInsertContent\',false, token1);
        var msg       = document.getElementById(html_message).value;
        var cursorlen = document.getElementById(html_message).selectionStart;
        var textlen   = msg.length;
        document.getElementById(html_message).value = msg.substring(0, cursorlen) + token1 + msg.substring(cursorlen, textlen);
        var cursorPos = (cursorlen + token1.length);
        document.getElementById(html_message).selectionStart = cursorPos;
        document.getElementById(html_message).selectionEnd   = cursorPos;
        document.getElementById(html_message).focus();
	} else if ( editor == "ckeditor" ) {
        oEditor = CKEDITOR.instances[html_message];
        oEditor.insertHtml(token1.toString() );        
    } else if ( editor == "drupalwysiwyg" ) {
        Drupal.wysiwyg.instances[html_message].insert(token1.toString());
    } else {
		var msg       = document.getElementById(html_message).value;
        var cursorlen = document.getElementById(html_message).selectionStart;
        var textlen   = msg.length;
        document.getElementById(html_message).value = msg.substring(0, cursorlen) + token1 + msg.substring(cursorlen, textlen);
        var cursorPos = (cursorlen + token1.length);
        document.getElementById(html_message).selectionStart = cursorPos;
        document.getElementById(html_message).selectionEnd   = cursorPos;
        document.getElementById(html_message).focus();
    }
    verify();
}

function showBindFormatChkBox()
{
    var templateExists = true;
    if ( document.getElementById(\'template\') == null || document.getElementById(\'template\').value == \'\' ) {
        templateExists = false;
    }
    var formatExists = true;
    if ( document.getElementById(\'format_id\').value == 0 ) {
        formatExists = false;
    }
    if ( templateExists && formatExists ) {
        document.getElementById("bindFormat").style.display = "block";
    } else if ( formatExists && document.getElementById("saveTemplate") != null && document.getElementById("saveTemplate").checked ) {
        document.getElementById("bindFormat").style.display = "block";
        var yes = confirm( \''; ?>
<?php echo $this->_tpl_vars['useThisPageFormat']; ?>
<?php echo '\' );
        if ( yes ) {
            document.getElementById("bind_format").checked = true;
        }
    } else {
        document.getElementById("bindFormat").style.display = "none";
        document.getElementById("bind_format").checked = false;
    }
}

function showUpdateFormatChkBox()
{
    if ( document.getElementById(\'format_id\').value != 0 ) {
        document.getElementById("updateFormat").style.display = "block";
    }
}

function hideUpdateFormatChkBox()
{
    document.getElementById("update_format").checked = false;
    document.getElementById("updateFormat").style.display = "none";
}

function selectFormat( val, bind )
{
    if ( val == null || val == 0 ) {
        val = 0;
        bind = false;
    }
    var dataUrl = '; ?>
"<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/ajax/pdfFormat','h' => 0), $this);?>
"<?php echo ';
    cj.post( dataUrl, {formatId: val}, function( data ) {
        cj("#format_id").val( data.id );
        cj("#paper_size").val( data.paper_size );
        cj("#orientation").val( data.orientation );
        cj("#metric").val( data.metric );
        cj("#margin_top").val( data.margin_top );
        cj("#margin_bottom").val( data.margin_bottom );
        cj("#margin_left").val( data.margin_left );
        cj("#margin_right").val( data.margin_right );
        selectPaper( data.paper_size );
        hideUpdateFormatChkBox();
        document.getElementById(\'bind_format\').checked = bind;
        showBindFormatChkBox();
    }, \'json\');
}

function selectPaper( val )
{
    dataUrl = '; ?>
"<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/ajax/paperSize','h' => 0), $this);?>
"<?php echo ';
    cj.post( dataUrl, {paperSizeName: val}, function( data ) {
        cj("#paper_size").val( data.name );
        metric = document.getElementById(\'metric\').value;
        currentWidth = convertMetric( data.width, data.metric, metric );
        currentHeight = convertMetric( data.height, data.metric, metric );
        updatePaperDimensions( );
    }, \'json\');
}

function selectMetric( metric )
{
    convertField( \'margin_top\', currentMetric, metric );
    convertField( \'margin_bottom\', currentMetric, metric );
    convertField( \'margin_left\', currentMetric, metric );
    convertField( \'margin_right\', currentMetric, metric );
    currentWidth = convertMetric( currentWidth, currentMetric, metric );
    currentHeight = convertMetric( currentHeight, currentMetric, metric );
    updatePaperDimensions( );
}

function updatePaperDimensions( )
{
    metric = document.getElementById(\'metric\').value;
    width = new String( currentWidth.toFixed( 2 ) );
    height = new String( currentHeight.toFixed( 2 ) );
    if ( document.getElementById(\'orientation\').value == \'landscape\' ) {
        width = new String( currentHeight.toFixed( 2 ) );
        height = new String( currentWidth.toFixed( 2 ) );
    }
    document.getElementById(\'paper_dimensions\').innerHTML = parseFloat( width ) + \' \' + metric + \' x \' + parseFloat( height ) + \' \' + metric;
    currentMetric = metric;
}

function convertField( id, from, to )
{
    val = document.getElementById( id ).value;
    if ( val == \'\' || isNaN( val ) ) return;
    val = convertMetric( val, from, to );
    val = new String( val.toFixed( 3 ) );
    document.getElementById( id ).value = parseFloat( val );
}

function convertMetric( value, from, to ) {
    switch( from + to ) {
        case \'incm\': return value * 2.54;
        case \'inmm\': return value * 25.4;
        case \'inpt\': return value * 72;
        case \'cmin\': return value / 2.54;
        case \'cmmm\': return value * 10;
        case \'cmpt\': return value * 72 / 2.54;
        case \'mmin\': return value / 25.4;
        case \'mmcm\': return value / 10;
        case \'mmpt\': return value * 72 / 25.4;
        case \'ptin\': return value / 72;
        case \'ptcm\': return value * 2.54 / 72;
        case \'ptmm\': return value * 25.4 / 72;
    }
    return value;
}

function showSaveDetails(chkbox)  {
    var formatSelected = ( document.getElementById(\'format_id\').value > 0 );
    var templateSelected = ( document.getElementById(\'template\') != null && document.getElementById(\'template\').value > 0 );
    if (chkbox.checked) {
        document.getElementById("saveDetails").style.display = "block";
        document.getElementById("saveTemplateName").disabled = false;
        if ( formatSelected && ! templateSelected ) {
            document.getElementById("bindFormat").style.display = "block";
            var yes = confirm( \''; ?>
<?php echo $this->_tpl_vars['useSelectedPageFormat']; ?>
<?php echo '\' );
            if ( yes ) {
                document.getElementById("bind_format").checked = true;
            }
        }
    } else {
        document.getElementById("saveDetails").style.display = "none";
        document.getElementById("saveTemplateName").disabled = true;
        if ( ! templateSelected ) {
            document.getElementById("bindFormat").style.display = "none";
            document.getElementById("bind_format").checked = false;
        }
    }
}

</script>
'; ?>

