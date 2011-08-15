<?php /* Smarty version 2.6.26, created on 2011-06-06 18:53:52
         compiled from CRM/Activity/Selector/Selector.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Activity/Selector/Selector.tpl', 6, false),array('function', 'crmURL', 'CRM/Activity/Selector/Selector.tpl', 58, false),)), $this); ?>
<span id="fileOnCaseStatusMsg-<?php echo $this->_tpl_vars['context']; ?>
" style="display:none;"></span>
<div class="crm-activity-selector-<?php echo $this->_tpl_vars['context']; ?>
">
<div class="crm-accordion-wrapper crm-search_filters-accordion crm-accordion-closed">
 <div class="crm-accordion-header">
  <div class="icon crm-accordion-pointer"></div> 
	<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Filter by Activity Type<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></a>
 </div><!-- /.crm-accordion-header -->
 <div class="crm-accordion-body">

  <table class="no-border form-layout-compressed" id="searchOptions">
    <tr>
        <td class="crm-contact-form-block-activity_type_filter_id">
            <?php echo $this->_tpl_vars['form']['activity_type_filter_id']['html']; ?>

        </td>
        <!--td style="vertical-align: bottom;">
		<span class="crm-button"><input class="form-submit default" name="_qf_Basic_refresh" value="Search" type="button" onclick="buildContactActivities( true )"; /></span>
	</td-->
    </tr>
  </table>
 </div><!-- /.crm-accordion-body -->
</div><!-- /.crm-accordion-wrapper -->
<table id="contact-activity-selector-<?php echo $this->_tpl_vars['context']; ?>
">
    <thead>
        <tr>
            <th class='crm-contact-activity-activity_type'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Type<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity_subject'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Subject<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-source_contact'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Added By<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-target_contact nosort'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>With<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-assignee_contact nosort'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Assigneed<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-activity_date'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Date<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-activity_status'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Status<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
            <th class='crm-contact-activity-links nosort'>&nbsp;</th>
            <th class='hiddenElement'>&nbsp;</th>
        </tr>
    </thead>
</table>
</div>
<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Case/Form/ActivityToCase.tpl", 'smarty_include_vars' => array('contactID' => $this->_tpl_vars['contactId'])));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
<?php echo '
<script type="text/javascript">
var '; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo 'oTable;

cj( function ( ) {
   cj().crmaccordions(); 
   var context = '; ?>
"<?php echo $this->_tpl_vars['context']; ?>
"<?php echo '; 
   buildContactActivities'; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo '( false );
   cj(\'.crm-activity-selector-\'+ context +\' #activity_type_filter_id\').change( function( ) {
       buildContactActivities'; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo '( true );
   });
});

function buildContactActivities'; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo '( filterSearch ) {
    if ( filterSearch ) {
        '; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo 'oTable.fnDestroy();
    }
    var context = '; ?>
"<?php echo $this->_tpl_vars['context']; ?>
"<?php echo '; 
    var columns = \'\';
    var sourceUrl = '; ?>
'<?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/ajax/contactactivity",'h' => 0,'q' => "snippet=4&context=".($this->_tpl_vars['context'])."&cid=".($this->_tpl_vars['contactId'])), $this);?>
'<?php echo ';

    var ZeroRecordText = '; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>'No matches found'<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php echo ';
    if ( cj(\'.crm-activity-selector-\'+ context +\' select#activity_type_filter_id\').val( ) ) {
      ZeroRecordText += '; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>' for Activity Type = "'<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php echo ' +  cj(\'.crm-activity-selector-\'+ context +\' select#activity_type_filter_id :selected\').text( ) + \'"\';
    } else {
      ZeroRecordText += \'.\';
    }

    '; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo 'oTable = cj(\'#contact-activity-selector-\' + context ).dataTable({
        "bFilter"    : false,
        "bAutoWidth" : false,
        "aaSorting"  : [],
        "aoColumns"  : [
                        {sClass:\'crm-contact-activity-activity_type\'},
                        {sClass:\'crm-contact-activity_subject\'},
                        {sClass:\'crm-contact-activity-source_contact\'},
                        {sClass:\'crm-contact-activity-target_contact\', bSortable:false},
                        {sClass:\'crm-contact-activity-assignee_contact\', bSortable:false},
                        {sClass:\'crm-contact-activity-activity_date\'},
                        {sClass:\'crm-contact-activity-activity_status\'},
                        {sClass:\'crm-contact-activity-links\', bSortable:false},
                        {sClass:\'hiddenElement\', bSortable:false}
                       ],
        "bProcessing": true,
        "sPaginationType": "full_numbers",
        "sDom"       : \'<"crm-datatable-pager-top"lfp>rt<"crm-datatable-pager-bottom"ip>\',	
        "bServerSide": true,
        "bJQueryUI": true,
        "sAjaxSource": sourceUrl,
        "iDisplayLength": 25,
        "oLanguage": { "sZeroRecords":  ZeroRecordText },
        "fnDrawCallback": function() { setSelectorClass'; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo '( context ); },
        "fnServerData": function ( sSource, aoData, fnCallback ) {
            aoData.push( {name:\'contact_id\', value: '; ?>
<?php echo $this->_tpl_vars['contactId']; ?>
<?php echo '},
                         {name:\'admin\',   value: '; ?>
'<?php echo $this->_tpl_vars['admin']; ?>
'<?php echo '}
            );
            if ( filterSearch ) {
                aoData.push(	     
                    {name:\'activity_type_id\', value: cj(\'.crm-activity-selector-\'+ context +\' select#activity_type_filter_id\').val()}
                );                
            }	
            cj.ajax( {
                "dataType": \'json\', 
                "type": "POST", 
                "url": sSource, 
                "data": aoData, 
                "success": fnCallback
            } ); 
        }
    });
}

function setSelectorClass'; ?>
<?php echo $this->_tpl_vars['context']; ?>
<?php echo '( context ) {
    cj(\'#contact-activity-selector-\' + context + \' td:last-child\').each( function( ) {
       cj(this).parent().addClass(cj(this).text() );
    });
}
</script>
'; ?>
