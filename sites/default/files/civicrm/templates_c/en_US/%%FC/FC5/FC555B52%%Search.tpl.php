<?php /* Smarty version 2.6.26, created on 2011-06-06 18:52:18
         compiled from CRM/Mailing/Form/Search.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('modifier', 'crmReplace', 'CRM/Mailing/Form/Search.tpl', 30, false),array('function', 'help', 'CRM/Mailing/Form/Search.tpl', 30, false),)), $this); ?>
<div class="crm-block crm-form-block crm-search-form-block">
<table class="form-layout">
    <tr>
        <td><?php echo $this->_tpl_vars['form']['mailing_name']['label']; ?>
<br />
            <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['mailing_name']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'big') : smarty_modifier_crmReplace($_tmp, 'class', 'big')); ?>
 <?php echo smarty_function_help(array('id' => "id-mailing_name"), $this);?>

        </td>
        <td class="nowrap"><?php echo $this->_tpl_vars['form']['mailing_from']['label']; ?>
<br />
            <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'mailing_from')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
        </td>
        <td class="nowrap"><?php echo $this->_tpl_vars['form']['mailing_to']['label']; ?>
<br />
            <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'mailing_to')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
        </td> 
    </tr>
    <tr> 
        <td colspan="3"><?php echo $this->_tpl_vars['form']['sort_name']['label']; ?>
<br />
            <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['sort_name']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'big') : smarty_modifier_crmReplace($_tmp, 'class', 'big')); ?>
 <?php echo smarty_function_help(array('id' => "id-create_sort_name"), $this);?>

        </td>
    </tr>

        <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Campaign/Form/addCampaignToComponent.tpl", 'smarty_include_vars' => array('campaignContext' => 'componentSearch','campaignTrClass' => '','campaignTdClass' => '')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

    <tr>
        <td><?php echo $this->_tpl_vars['form']['buttons']['html']; ?>
</td><td colspan="2"></td>
    </tr>
</table>
</div>