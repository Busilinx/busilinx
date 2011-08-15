<?php /* Smarty version 2.6.26, created on 2011-08-11 16:27:55
         compiled from CRM/Admin/Form/Setting/Miscellaneous.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Admin/Form/Setting/Miscellaneous.tpl', 32, false),)), $this); ?>
<div class="crm-block crm-form-block crm-miscellaneous-form-block">
  <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'top')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
    <table class="form-layout">
        <tr class="crm-miscellaneous-form-block-dashboardCacheTimeout">
            <td class="label"><?php echo $this->_tpl_vars['form']['dashboardCacheTimeout']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['dashboardCacheTimeout']['html']; ?>
<br />
                <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>The number of minutes to cache dashlet content on dashboard.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
    </table>

    <table class="form-layout">
        <tr class="crm-miscellaneous-form-block-contactUndelete">
          <td class="label"><?php echo $this->_tpl_vars['form']['contactUndelete']['label']; ?>
</td>
          <td>
            <?php echo $this->_tpl_vars['form']['contactUndelete']['html']; ?>
<br />
            <p class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>If enabled, deleted contacts will be moved to trash (instead of being destroyed). Users with the proper permission are able to search for the deleted contacts and restore them (or delete permanently).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
          </td>
        </tr>
        <tr class="crm-miscellaneous-form-block-logging">
          <td class="label"><?php echo $this->_tpl_vars['form']['logging']['label']; ?>
</td>
          <td>
            <?php echo $this->_tpl_vars['form']['logging']['html']; ?>
<br />
          <?php if ($this->_tpl_vars['validTriggerPermission']): ?>
            <p class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>If enabled, all actions performed on non-cache tables will be logged (in the respective log_* tables).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
            <div class="status message"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Logging functionality is currently in beta. Please test this feature on a copy of your database prior to using it on a production site.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></div>
          <?php else: ?>
            <p class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>In order to use this functionality, the installation's database user must have privileges to create triggers (in MySQL 5.0 – and in MySQL 5.1 if binary logging is enabled – this means the SUPER privilege). This install either does not seem to have the required privilege enabled.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>This functionality cannot be enabled on multilingual installations.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
           <?php endif; ?>
          </td>
        </tr>
        <tr class="crm-miscellaneous-form-block-versionCheck">
            <td class="label"><?php echo $this->_tpl_vars['form']['versionCheck']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['versionCheck']['html']; ?>
<br />
                <p class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>If enabled, CiviCRM automatically checks availablity of a newer version of the software. New version alerts will be displayed on the main CiviCRM Administration page.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p>
                <p class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>When enabled, statistics about your CiviCRM installation are reported anonymously to the CiviCRM team to assist in prioritizing ongoing development efforts. The following information is gathered: CiviCRM version, versions of PHP, MySQL and framework (Drupal/Joomla/standalone), and default language. Counts (but no actual data) of the following record types are reported: contacts, activities, cases, relationships, contributions, contribution pages, contribution products, contribution widgets, discounts, price sets, profiles, events, participants, tell-a-friend pages, grants, mailings, memberships, membership blocks, pledges, pledge blocks and active payment processor types.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></p></td>
        </tr>
        <tr class="crm-miscellaneous-form-block-maxAttachments">
            <td class="label"><?php echo $this->_tpl_vars['form']['maxAttachments']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['maxAttachments']['html']; ?>
<br />
                <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Maximum number of files (documents, images, etc.) which can attached to emails or activities.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
	<tr class="crm-miscellaneous-form-block-maxFileSize">
	    <td class="label"><?php echo $this->_tpl_vars['form']['maxFileSize']['label']; ?>
 (in MB)</td>
            <td><?php echo $this->_tpl_vars['form']['maxFileSize']['html']; ?>
<br />
                <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Maximum Size of file (documents, images, etc.) which can attached to emails or activities.<br />Note: php.ini should support this file size.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
    </table>
<h3><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>reCAPTCHA Keys<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></h3>
    <div class="description">
        <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>reCAPTCHA is a free service that helps prevent automated abuse of your site. To use reCAPTCHA on public-facing CiviCRM forms: sign up at <a href="http://recaptcha.net" "target=_blank">recaptcha.net</a>; enter the provided public and private reCAPTCHA keys here; then enable reCAPTCHA under Advanced Settings in any Profile.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
    </div>
    <table class="form-layout">
        <tr class="crm-miscellaneous-form-block-recaptchaPublicKey">
            <td class="label"><?php echo $this->_tpl_vars['form']['recaptchaPublicKey']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['recaptchaPublicKey']['html']; ?>
</td>
        </tr>
        <tr class="crm-miscellaneous-form-block-recaptchaPrivateKey">
            <td class="label"><?php echo $this->_tpl_vars['form']['recaptchaPrivateKey']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['recaptchaPrivateKey']['html']; ?>
</td>
        </tr>
        <tr class="crm-miscellaneous-form-block-recaptchaOptions">
            <td class="label"><?php echo $this->_tpl_vars['form']['recaptchaOptions']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['recaptchaOptions']['html']; ?>
<br />
                <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>You can specify the reCAPTCHA theme options as an comma seperated data.(eg: theme:'blackglass', lang : 'fr' ).<br />You can check the available options for reCAPTCHA here <a href="http://code.google.com/apis/recaptcha/docs/customization.html" "target=_blank">Customizing the Look and Feel of reCAPTCHA</a>.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        </table>
           <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'bottom')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
</div>