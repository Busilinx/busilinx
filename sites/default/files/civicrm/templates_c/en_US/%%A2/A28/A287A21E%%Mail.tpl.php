<?php /* Smarty version 2.6.26, created on 2011-06-06 18:48:13
         compiled from CRM/Admin/Form/Setting/Mail.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'docURL', 'CRM/Admin/Form/Setting/Mail.tpl', 26, false),array('block', 'ts', 'CRM/Admin/Form/Setting/Mail.tpl', 29, false),)), $this); ?>
<?php ob_start(); ?><?php echo smarty_function_docURL(array('page' => 'CiviMail Admin','text' => 'CiviMail Administration Guide'), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('docLink', ob_get_contents());ob_end_clean(); ?>
<div class="crm-block crm-form-block crm-mail-form-block">
<div id="help">
    <?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['docLink'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>These settings are used to configure mailer properties for the optional CiviMail component. They are NOT used for the built-in 'Send Email to Contacts' feature. Refer to the %1 for more information.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
</div>
<div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'top')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>                         
      <table class="form-layout-compressed">
        <tr class="crm-mail-form-block-mailerBatchLimit">
            <td class="label"><?php echo $this->_tpl_vars['form']['mailerBatchLimit']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['mailerBatchLimit']['html']; ?>
<br />    
            <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Throttle email delivery by setting the maximum number of emails sent during each CiviMail run (0 = unlimited).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-mail-form-block-mailerJobSize">
            <td class="label"><?php echo $this->_tpl_vars['form']['mailerJobSize']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['mailerJobSize']['html']; ?>
<br />    
            <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>If you want to utilize multi-threading enter the size you want your sub jobs to be split into (0 = disables multi-threading and processes mail as one single job - batch limits still apply)<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-mail-form-block-verpSeparator">
            <td class="label"><?php echo $this->_tpl_vars['form']['verpSeparator']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['verpSeparator']['html']; ?>
<br />
            <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Separator character used when CiviMail generates VERP (variable envelope return path) Mail-From addresses.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
      </table>
<div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'bottom')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>     
<div class="spacer"></div>
</div>