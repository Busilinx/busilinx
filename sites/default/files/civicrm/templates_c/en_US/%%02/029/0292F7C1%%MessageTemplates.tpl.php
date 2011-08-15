<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:29
         compiled from CRM/Admin/Page/MessageTemplates.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'crmURL', 'CRM/Admin/Page/MessageTemplates.tpl', 26, false),array('function', 'help', 'CRM/Admin/Page/MessageTemplates.tpl', 34, false),array('function', 'cycle', 'CRM/Admin/Page/MessageTemplates.tpl', 124, false),array('block', 'ts', 'CRM/Admin/Page/MessageTemplates.tpl', 34, false),array('modifier', 'htmlentities', 'CRM/Admin/Page/MessageTemplates.tpl', 56, false),array('modifier', 'replace', 'CRM/Admin/Page/MessageTemplates.tpl', 130, false),)), $this); ?>
<?php ob_start(); ?><?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/admin/messageTemplates/add','q' => "action=add&reset=1"), $this);?>
<?php $this->_smarty_vars['capture']['default'] = ob_get_contents();  $this->assign('crmURL', ob_get_contents());ob_end_clean(); ?>
<?php if ($this->_tpl_vars['action'] == 1 || $this->_tpl_vars['action'] == 2 || $this->_tpl_vars['action'] == 8): ?>
   <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Admin/Form/MessageTemplates.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
   
<?php elseif ($this->_tpl_vars['action'] == 4): ?>
  
  <div id="help">
    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>You are viewing the default message template for this system workflow.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo smarty_function_help(array('id' => "id-view_system_default"), $this);?>

  </div>

  <fieldset>
  <div class="crm-section msg_title-section">
    <div class="bold"><?php echo $this->_tpl_vars['form']['msg_title']['value']; ?>
</div>
  </div>
  <div class="crm-section msg_subject-section">
  <h3 class="header-dark"><?php echo $this->_tpl_vars['form']['msg_subject']['label']; ?>
</h3>
    <div class="text">
      <textarea name="msg-subject" id="msg_subject" style="height: 6em; width: 45em;"><?php echo $this->_tpl_vars['form']['msg_subject']['value']; ?>
</textarea>
      <div class='spacer'></div>
      <div class="section">
        <a href='#' onclick='MessageTemplates.msg_subject.select(); return false;' class='button'><span>Select Subject</span></a>
        <div class='spacer'></div>
      </div>
    </div>
  </div>
  
  <div class="crm-section msg_txt-section">
  <h3 class="header-dark"><?php echo $this->_tpl_vars['form']['msg_text']['label']; ?>
</h3>
    <div class="text">
      <textarea class="huge" name='msg_text' id='msg_text'><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['msg_text']['value'])) ? $this->_run_mod_handler('htmlentities', true, $_tmp) : htmlentities($_tmp)); ?>
</textarea>
      <div class='spacer'></div>
      <div class="section">
        <a href='#' onclick='MessageTemplates.msg_text.select(); return false;' class='button'><span>Select Text Message</span></a>
        <div class='spacer'></div>
      </div>
    </div>
  </div>

  <div class="crm-section msg_html-section">
  <h3 class="header-dark"><?php echo $this->_tpl_vars['form']['msg_html']['label']; ?>
</h3>
    <div class='text'>
      <textarea class="huge" name='msg_html' id='msg_html'><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['msg_html']['value'])) ? $this->_run_mod_handler('htmlentities', true, $_tmp) : htmlentities($_tmp)); ?>
</textarea>
      <div class='spacer'></div>
      <div class="section">
        <a href='#' onclick='MessageTemplates.msg_html.select(); return false;' class='button'><span>Select HTML Message</span></a>
        <div class='spacer'></div>
      </div>
    </div>
  </div>

  <div class="crm-section msg_html-section">
  <h3 class="header-dark"><?php echo $this->_tpl_vars['form']['pdf_format_id']['label']; ?>
</h3>
    <div class='text'>
      <?php echo $this->_tpl_vars['form']['pdf_format_id']['html']; ?>

    </div>
  </div>
    
  <div id="crm-submit-buttons"><?php echo $this->_tpl_vars['form']['buttons']['html']; ?>
</div>
  </fieldset>
<?php endif; ?>

<?php if ($this->_tpl_vars['rows'] && $this->_tpl_vars['action'] != 2 && $this->_tpl_vars['action'] != 4): ?>

  <div id='mainTabContainer'>
    <ul>
      <li id='tab_user'>    <a href='#user'     title='<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>User-driven Messages<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'>    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>User-driven Messages<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>    </a></li>
      <li id='tab_workflow'><a href='#workflow' title='<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>System Workflow Messages<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>System Workflow Messages<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></a></li>
    </ul>
  
        <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/enableDisable.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jsortable.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
    <?php $_from = $this->_tpl_vars['rows']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['type'] => $this->_tpl_vars['template_row']):
?>
      <div id="<?php if ($this->_tpl_vars['type'] == 'userTemplates'): ?>user<?php else: ?>workflow<?php endif; ?>" class='ui-tabs-panel ui-widget-content ui-corner-bottom'>
          <div class="help">
          <?php if ($this->_tpl_vars['type'] == 'userTemplates'): ?>
            <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>User-driven message templates allow you to save and re-use messages with layouts. They are useful if you need to send similar emails to contacts on a recurring basis. You can also use them in CiviMail Mailings and they are required for CiviMember membership renewal reminders.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo smarty_function_help(array('id' => "id-intro"), $this);?>

          <?php else: ?>
            <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>System workflow message templates are used to generate the emails sent to consituents and administrators for contribution receipts, event confirmations and many other workflows. You can customize the style and wording of these messages here.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php echo smarty_function_help(array('id' => "id-system-workflow"), $this);?>

          <?php endif; ?>
          </div>
        <div>
          <p></p>
            <?php if (! empty ( $this->_tpl_vars['template_row'] )): ?>
              <table class="display">
                <thead>
                  <tr>
                    <th class="sortable"><?php if ($this->_tpl_vars['type'] == 'userTemplates'): ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Message Title<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php else: ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Workflow<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php endif; ?></th>
                    <?php if ($this->_tpl_vars['type'] == 'userTemplates'): ?>
                      <th><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Message Subject<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
                      <th><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Enabled?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></th>
                    <?php endif; ?>
                    <th></th>
                  </tr>
                </thead>
                <tbody>
                <?php $_from = $this->_tpl_vars['template_row']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['row']):
?>
                    <tr id="row_<?php echo $this->_tpl_vars['row']['id']; ?>
" class="<?php echo smarty_function_cycle(array('values' => "odd-row,even-row"), $this);?>
 <?php echo $this->_tpl_vars['row']['class']; ?>
<?php if (! $this->_tpl_vars['row']['is_active']): ?> disabled<?php endif; ?>">
                      <td><?php echo $this->_tpl_vars['row']['msg_title']; ?>
</td>
                      <?php if ($this->_tpl_vars['type'] == 'userTemplates'): ?>
                        <td><?php echo $this->_tpl_vars['row']['msg_subject']; ?>
</td>
                        <td id="row_<?php echo $this->_tpl_vars['row']['id']; ?>
_status"><?php if ($this->_tpl_vars['row']['is_active'] == 1): ?> <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Yes<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php else: ?> <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>No<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php endif; ?></td>
                      <?php endif; ?>
                      <td><?php echo ((is_array($_tmp=$this->_tpl_vars['row']['action'])) ? $this->_run_mod_handler('replace', true, $_tmp, 'xx', $this->_tpl_vars['row']['id']) : smarty_modifier_replace($_tmp, 'xx', $this->_tpl_vars['row']['id'])); ?>
</td>
                    </tr>
                <?php endforeach; endif; unset($_from); ?>
                </tbody>
              </table>
              <?php endif; ?>

            <?php if ($this->_tpl_vars['action'] != 1 && $this->_tpl_vars['action'] != 2 && $this->_tpl_vars['type'] == 'userTemplates'): ?>
              <div class="action-link">
                <a href="<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/admin/messageTemplates/add','q' => "action=add&reset=1"), $this);?>
" id="newMessageTemplates" class="button"><span><div class="icon add-icon"></div><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Add Message Template<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></a>
              </div>
              <div class="spacer"></div>
            <?php endif; ?>
            
            <?php if (empty ( $this->_tpl_vars['template_row'] )): ?>
                <div class="messages status">
                    <div class="icon inform-icon"></div>&nbsp;
                    <?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['crmURL'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>There are no User-driven Message Templates entered. You can <a href='%1'>add one</a>.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
                </div>
            <?php endif; ?>
         </div>
      </div>
    <?php endforeach; endif; unset($_from); ?>
  </div>

  <script type='text/javascript'>
    var selectedTab = 'user';
    <?php if ($this->_tpl_vars['selectedChild']): ?>selectedTab = '<?php echo $this->_tpl_vars['selectedChild']; ?>
';<?php endif; ?>
    <?php echo '
      cj( function() {
        var tabIndex = cj(\'#tab_\' + selectedTab).prevAll().length
        cj("#mainTabContainer").tabs( {selected: tabIndex} );
      });
    '; ?>

  </script>

<?php elseif ($this->_tpl_vars['action'] != 1 && $this->_tpl_vars['action'] != 2 && $this->_tpl_vars['action'] != 4 && $this->_tpl_vars['action'] != 8): ?>
  <div class="messages status">
      <img src="<?php echo $this->_tpl_vars['config']->resourceBase; ?>
i/Inform.gif" alt="<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>status<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>"/>
      <?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['crmURL'])); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>There are no Message Templates entered. You can <a href='%1'>add one</a>.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
  </div>
<?php endif; ?>