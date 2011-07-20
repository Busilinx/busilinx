<?php /* Smarty version 2.6.26, created on 2011-07-08 14:19:02
         compiled from CRM/Block/FullTextSearch.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'crmURL', 'CRM/Block/FullTextSearch.tpl', 31, false),array('function', 'help', 'CRM/Block/FullTextSearch.tpl', 63, false),array('block', 'ts', 'CRM/Block/FullTextSearch.tpl', 43, false),)), $this); ?>
<script type="text/javascript">
    <?php echo '
    function submitForm( ) {
        var text  = document.getElementById(\'text\').value;
        var table = document.getElementById(\'fulltext_table\').value;
        var url = '; ?>
'<?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/contact/search/custom",'h' => 0,'q' => "csid=".($this->_tpl_vars['fullTextSearchID'])."&reset=1&force=1&text="), $this);?>
'<?php echo ' + text;
        if ( table ) {
            url = url + \'&table=\' + table;
        }
        document.getElementById(\'id_fulltext_search\').action = url;
    }    
    '; ?>

</script>

<div class="block-crm">
    <form method="post" id="id_fulltext_search">
    <div style="margin-bottom: 8px;">
    <input type="text" name="text" id='text' value="" style="width: 10em;" />&nbsp;<input type="submit" name="submit" id="fulltext_submit" value="<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Go<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>" class="form-submit"/ onclick='submitForm();'>
	</div>
	<select class="form-select" id="fulltext_table" name="fulltext_table">
<?php if (call_user_func ( array ( 'CRM_Core_Permission' , 'giveMeAllACLs' ) )): ?>
    	<option value=""><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>All<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
    	<option value="Contact"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Contacts<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php endif; ?>
    	<option value="Activity"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Activities<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php if (call_user_func ( array ( 'CRM_Core_Permission' , 'access' ) , 'CiviCase' )): ?>
    	<option value="Case"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Cases<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php endif; ?>
<?php if (call_user_func ( array ( 'CRM_Core_Permission' , 'access' ) , 'CiviContribute' )): ?>
      	<option value="Contribution"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Contributions<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php endif; ?>
<?php if (call_user_func ( array ( 'CRM_Core_Permission' , 'access' ) , 'CiviEvent' )): ?>
        <option value="Participant"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Participants<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php endif; ?>
<?php if (call_user_func ( array ( 'CRM_Core_Permission' , 'access' ) , 'CiviMember' )): ?>
        <option value="Membership"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Memberships<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></option>
<?php endif; ?>
    </select><?php echo smarty_function_help(array('id' => "id-fullText-block",'file' => "CRM/Contact/Form/Search/Custom/FullText.hlp"), $this);?>

    </form>
</div>