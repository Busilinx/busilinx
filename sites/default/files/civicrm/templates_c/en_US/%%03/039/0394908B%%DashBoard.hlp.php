<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:51
         compiled from CRM/Member/Page/DashBoard.hlp */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'htxt', 'CRM/Member/Page/DashBoard.hlp', 26, false),array('block', 'ts', 'CRM/Member/Page/DashBoard.hlp', 31, false),array('function', 'crmURL', 'CRM/Member/Page/DashBoard.hlp', 27, false),array('function', 'docURL', 'CRM/Member/Page/DashBoard.hlp', 34, false),)), $this); ?>
<?php $this->_tag_stack[] = array('htxt', array('id' => "id-member-intro")); $_block_repeat=true;smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>
    <?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/contact/search/basic",'q' => "reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('findContactURL', ob_get_contents());ob_end_clean(); ?>
    <?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/admin/contribute",'q' => "reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('contribPagesURL', ob_get_contents());ob_end_clean(); ?>
    <?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/admin/member/membershipType",'q' => "reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('memberTypesURL', ob_get_contents());ob_end_clean(); ?>
    <?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/member/import",'q' => "reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('importURL', ob_get_contents());ob_end_clean(); ?>
    <p><?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['contribPagesURL'],'2' => $this->_tpl_vars['memberTypesURL'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>CiviMember allows you to create customized membership types as well as page(s) for online membership sign-up and renewal. Administrators can create or modify Membership Types <a href='%2'>here</a>, and configure Online Contribution Pages which include membership sign-up <a href='%1'>here</a>.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
    <?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => "civicrm/member/search/basic",'q' => "reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('findMembersURL', ob_get_contents());ob_end_clean(); ?>
    <p><?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['findMembersURL'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>This table provides a summary of <strong>Membership Signup and Renewal Activity</strong>, and includes shortcuts to view the details for these commonly used search criteria. To run your own customized searches - click <a href='%1'>Find Members</a>. You can search by Member Name, Membership Type, Status, and Signup Date Ranges.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
    <p><?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['findContactURL'],'2' => $this->_tpl_vars['importURL'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>You can also input and track membership sign-ups offline. To record memberships manually for individual contacts, use <a href="%1">Find Contacts</a> to locate the contact. Then click <strong>View</strong> to go to their summary page and click on the <strong>New Membership</strong> link. You can also <a href="%2">import batches of membership records</a> from other sources.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo smarty_function_docURL(array('page' => 'CiviMember','text' => "Refer to CiviMember Guide for more information."), $this);?>
</p>
<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_htxt($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>