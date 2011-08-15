<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:12
         compiled from CRM/Member/Form/Search/Common.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Member/Form/Search/Common.tpl', 27, false),array('function', 'cycle', 'CRM/Member/Form/Search/Common.tpl', 30, false),array('function', 'help', 'CRM/Member/Form/Search/Common.tpl', 55, false),)), $this); ?>
<tr> 
    <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Membership Type(s)<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label><br />
                   <div class="listing-box">
                    <?php $_from = $this->_tpl_vars['form']['member_membership_type_id']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['membership_type_val']):
?> 
                    <div class="<?php echo smarty_function_cycle(array('values' => "odd-row,even-row"), $this);?>
">
                    <?php echo $this->_tpl_vars['membership_type_val']['html']; ?>

                    </div>
                    <?php endforeach; endif; unset($_from); ?>
                </div>
    </td>
    <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Membership Status<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label><br />
                <div class="listing-box">
                    <?php $_from = $this->_tpl_vars['form']['member_status_id']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['membership_status_val']):
?> 
                    <div class="<?php echo smarty_function_cycle(array('values' => "odd-row,even-row"), $this);?>
">
                    <?php echo $this->_tpl_vars['membership_status_val']['html']; ?>

                    </div>
                    <?php endforeach; endif; unset($_from); ?>
                </div>
    </td>
</tr>

<tr>
    <td>
     <?php echo $this->_tpl_vars['form']['member_source']['label']; ?>

     <br /><?php echo $this->_tpl_vars['form']['member_source']['html']; ?>

    </td>
    <td>
     <?php echo $this->_tpl_vars['form']['member_is_primary']['html']; ?>
 
     <span class="crm-clear-link">(<a href="#" title="unselect" onclick="unselectRadio('member_is_primary', '<?php echo $this->_tpl_vars['form']['formName']; ?>
'); return false;" ><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>clear<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></a>)</span>     
     <?php echo smarty_function_help(array('id' => "id-member_is_primary",'file' => "CRM/Member/Form/Search.hlp"), $this);?>

     <br />
     <?php echo $this->_tpl_vars['form']['member_pay_later']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['member_pay_later']['label']; ?>
<br />
     <?php echo $this->_tpl_vars['form']['member_test']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['member_test']['label']; ?>
<br />
     <?php echo $this->_tpl_vars['form']['member_auto_renew']['html']; ?>
&nbsp;<?php echo $this->_tpl_vars['form']['member_auto_renew']['label']; ?>

    </td> 
</tr>
<tr> 
    <td> 
     <?php echo $this->_tpl_vars['form']['member_join_date_low']['label']; ?>
 
     <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_join_date_low')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td>
    <td> 
     <?php echo $this->_tpl_vars['form']['member_join_date_high']['label']; ?>
 <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_join_date_high')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td> 
</tr> 
<tr> 
    <td> 
     <?php echo $this->_tpl_vars['form']['member_start_date_low']['label']; ?>
 
     <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_start_date_low')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td>
    <td>
     <?php echo $this->_tpl_vars['form']['member_start_date_high']['label']; ?>

     <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_start_date_high')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td> 
</tr> 
<tr> 
    <td>  
     <?php echo $this->_tpl_vars['form']['member_end_date_low']['label']; ?>
 
     <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_end_date_low')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td>
    <td> 
     <?php echo $this->_tpl_vars['form']['member_end_date_high']['label']; ?>

     <br />
     <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'member_end_date_high')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td> 
</tr> 

<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Campaign/Form/addCampaignToComponent.tpl", 'smarty_include_vars' => array('campaignContext' => 'componentSearch','campaignTrClass' => '','campaignTdClass' => '')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

<?php if ($this->_tpl_vars['membershipGroupTree']): ?>
<tr>
    <td colspan="4">
    <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Custom/Form/Search.tpl", 'smarty_include_vars' => array('groupTree' => $this->_tpl_vars['membershipGroupTree'],'showHideLinks' => false)));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    </td>
</tr>
<?php endif; ?>