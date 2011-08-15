<?php /* Smarty version 2.6.26, created on 2011-08-11 11:28:02
         compiled from CRM/Admin/Form/Setting/Path.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Admin/Form/Setting/Path.tpl', 28, false),array('modifier', 'crmReplace', 'CRM/Admin/Form/Setting/Path.tpl', 34, false),array('function', 'docURL', 'CRM/Admin/Form/Setting/Path.tpl', 53, false),)), $this); ?>
<div class="crm-block crm-form-block crm-path-form-block">
<div id="help">
    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Default values will be supplied for these upload directories the first time you access CiviCRM - based on the CIVICRM_TEMPLATE_COMPILEDIR specified in civicrm.settings.php. If you need to modify the defaults, make sure that your web server has write access to the directories.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
</div>
 <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'top')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
           <table class="form-layout">
            <tr class="crm-path-form-block-uploadDir">
                <td class="label"><?php echo $this->_tpl_vars['form']['uploadDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['uploadDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>File system path where temporary CiviCRM files - such as import data files - are uploaded.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span>
                </td>
            </tr>
            <tr class="crm-path-form-block-imageUploadDir">
                <td class="label"><?php echo $this->_tpl_vars['form']['imageUploadDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['imageUploadDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>File system path where image files are uploaded. Currently, this path is used for images associated with premiums (CiviContribute thank-you gifts).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span>
                </td>    
            </tr>
            <tr class="crm-path-form-block-customFileUploadDir">  
                <td class="label"><?php echo $this->_tpl_vars['form']['customFileUploadDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['customFileUploadDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Path where documents and images which are attachments to contact records are stored (e.g. contact photos, resumes, contracts, etc.). These attachments are defined using 'file' type custom fields.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span>
                </td>
            </tr>
            <tr class="crm-path-form-block-customTemplateDir">  
                <td class="label"><?php echo $this->_tpl_vars['form']['customTemplateDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['customTemplateDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Path where site specific templates are stored if any. This directory is searched first if set. CiviCase configuration files can also be stored in this custom path.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo smarty_function_docURL(array('page' => 'CiviCase Configuration'), $this);?>
</span>
                </td>
            </tr>
            <tr class="crm-path-form-block-customPHPPathDir">  
                <td class="label"><?php echo $this->_tpl_vars['form']['customPHPPathDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['customPHPPathDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Path where site specific PHP code files are stored if any. This directory is searched first if set.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span>
                </td>    
            </tr>
            <tr class="crm-path-form-block-extensionsDir">  
                <td class="label"><?php echo $this->_tpl_vars['form']['extensionsDir']['label']; ?>
</td>
                <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['extensionsDir']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge40') : smarty_modifier_crmReplace($_tmp, 'class', 'huge40')); ?>
<br />
                    <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Path where CiviCRM extensions are stored.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span>
                </td>    
            </tr>
        </table>
   <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'bottom')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
</div>