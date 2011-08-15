<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:29
         compiled from CRM/Admin/Page/MessageTemplates.hlp */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'docURL', 'CRM/Admin/Page/MessageTemplates.hlp', 26, false),array('block', 'htxt', 'CRM/Admin/Page/MessageTemplates.hlp', 29, false),array('block', 'ts', 'CRM/Admin/Page/MessageTemplates.hlp', 31, false),)), $this); ?>
<?php ob_start(); ?><?php echo smarty_function_docURL(array('page' => "Mail-merge Tokens for Contact Data"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('tokenDocLink', ob_get_contents());ob_end_clean(); ?>
<?php ob_start(); ?><?php echo smarty_function_docURL(array('page' => 'Membership Types'), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('memberTypesDocLink', ob_get_contents());ob_end_clean(); ?>

<?php $this->_tag_stack[] = array('htxt', array('id' => "id-intro")); $_block_repeat=true;smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>
<p>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Message templates allow you to save and re-use messages with layouts. You can use them when sending email to one or more contacts. If you are using the CiviMail component - you can use templates for your messages. If you are using the CiviMember component, you will need to create one or more message templates for membership renewal reminders.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo $this->_tpl_vars['memberTypesDocLink']; ?>

</p>

<p>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>You may include tokens to represent fields (like a contact's "first name") in the message subject and body. These will be replaced with the actual value of the corresponding field in the outgoing message EXAMPLE: Dear {contact.first_name}.
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo $this->_tpl_vars['tokenDocLink']; ?>

</p>
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>

<?php $this->_tag_stack[] = array('htxt', array('id' => "id-system-workflow")); $_block_repeat=true;smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>
<p>
    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>System workflow message templates are used to generate the emails sent to consituents and administrators for contribution receipts, event confirmations and many other workflows. You can customize the style and wording of these messages here.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
</p>
<p>
    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Workflow messages include text AND necessary program logic. Use caution when editing so as not to modify the program logic. Be sure to test the workflow and review the emails sent after making any changes. If you find that your changes have caused problems, errors or missing information - you can always &quot;Revert&quot; to the system default for that workflow.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
</p>
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>

<?php $this->_tag_stack[] = array('htxt', array('id' => "id-msgTplIntro")); $_block_repeat=true;smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>
<p>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Use this form to add or edit re-usable message templates. Once you save a message template, you can use it when sending mail to one or more contacts. If you are using the CiviMember component, you can also use a message template to send Membership Renewal Reminders. You may include tokens to represent fields (like a contact's "first name") in the message subject and body. These will be replaced with the actual value of the corresponding field in the outgoing message. EXAMPLE: Dear{contact.first_name}.
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo $this->_tpl_vars['tokenDocLink']; ?>

</p>
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>

<?php $this->_tag_stack[] = array('htxt', array('id' => "id-view_system_default")); $_block_repeat=true;smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>You can view or revert to the default version of any system workflow message template which you've modified. After upgrades OR if you are having issues with your modified version, it is useful to compare your active version to the default code shown on this screen. You can use the 'Select' buttons below (with copy and paste commands) to copy the default code into a text editor and then compare it to your customized version.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>