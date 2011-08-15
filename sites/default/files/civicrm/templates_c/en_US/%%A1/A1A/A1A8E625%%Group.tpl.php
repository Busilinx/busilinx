<?php /* Smarty version 2.6.26, created on 2011-06-06 18:52:11
         compiled from CRM/Mailing/Form/Group.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Mailing/Form/Group.tpl', 29, false),array('function', 'help', 'CRM/Mailing/Form/Group.tpl', 36, false),)), $this); ?>
<?php if ($this->_tpl_vars['groupCount'] == 0 && $this->_tpl_vars['mailingCount'] == 0): ?>
  <div class="status">
	<div class="icon inform-icon"></div>
        <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>To send a mailing, you must have a valid group of recipients - either at least one group that's a Mailing List or at least one previous mailing.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
  </div>
<?php else: ?>
<div class="crm-block crm-form-block crm-mailing-group-form-block">
<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/WizardHeader.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

  <table class="form-layout">
   <tr class="crm-mailing-group-form-block-name"><td class="label"><?php echo $this->_tpl_vars['form']['name']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['name']['html']; ?>
 <?php echo smarty_function_help(array('id' => "mailing-name"), $this);?>
</td></tr>   
          <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Campaign/Form/addCampaignToComponent.tpl", 'smarty_include_vars' => array('campaignTrClass' => "crm-mailing-group-form-block-campaign_id")));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

    <?php if ($this->_tpl_vars['context'] == 'search'): ?>
        <tr class="crm-mailing-group-form-block-baseGroup"><td class="label"><?php echo $this->_tpl_vars['form']['baseGroup']['label']; ?>
</td><td><?php echo $this->_tpl_vars['form']['baseGroup']['html']; ?>
</td></tr>
    <?php endif; ?>	
  </table>


<div id="id-additional" class="form-item">
<div class="crm-accordion-wrapper crm-accordion_title-accordion crm-accordion-open">
 <div class="crm-accordion-header">
  <div class="icon crm-accordion-pointer"></div> 
 <?php if ($this->_tpl_vars['context'] == 'search'): ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Additional Mailing Recipients<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php else: ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Mailing Recipients<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php endif; ?>
 </div><!-- /.crm-accordion-header -->
 <div class="crm-accordion-body">
  <?php echo '<table>'; ?><?php if ($this->_tpl_vars['groupCount'] > 0): ?><?php echo '<tr class="crm-mailing-group-form-block-includeGroups"><td class="label">'; ?><?php echo $this->_tpl_vars['form']['includeGroups']['label']; ?><?php echo ' '; ?><?php echo smarty_function_help(array('id' => "include-groups"), $this);?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-includeGroups"><td>'; ?><?php echo $this->_tpl_vars['form']['includeGroups']['html']; ?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-excludeGroups"><td class="label">'; ?><?php echo $this->_tpl_vars['form']['excludeGroups']['label']; ?><?php echo ' '; ?><?php echo smarty_function_help(array('id' => "exclude-groups"), $this);?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-excludeGroups"><td>'; ?><?php echo $this->_tpl_vars['form']['excludeGroups']['html']; ?><?php echo '</td></tr>'; ?><?php endif; ?><?php echo ''; ?><?php if ($this->_tpl_vars['mailingCount'] > 0): ?><?php echo '<tr class="crm-mailing-group-form-block-includeMailings"><td class="label">'; ?><?php echo $this->_tpl_vars['form']['includeMailings']['label']; ?><?php echo ' '; ?><?php echo smarty_function_help(array('id' => "include-mailings"), $this);?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-includeMailings"><td>'; ?><?php echo $this->_tpl_vars['form']['includeMailings']['html']; ?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-excludeMailings"><td class="label">'; ?><?php echo $this->_tpl_vars['form']['excludeMailings']['label']; ?><?php echo ' '; ?><?php echo smarty_function_help(array('id' => "exclude-mailings"), $this);?><?php echo '</td></tr><tr class="crm-mailing-group-form-block-excludeMailings"><td>'; ?><?php echo $this->_tpl_vars['form']['excludeMailings']['html']; ?><?php echo '</td></tr>'; ?><?php endif; ?><?php echo '</table>'; ?>

 </div><!-- /.crm-accordion-body -->
</div><!-- /.crm-accordion-wrapper -->

  <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
</div>

<?php echo '
<script type="text/javascript">
cj(function() {
   cj().crmaccordions(); 
});
</script>
'; ?>


<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formNavigate.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
</div>
<?php endif; ?>