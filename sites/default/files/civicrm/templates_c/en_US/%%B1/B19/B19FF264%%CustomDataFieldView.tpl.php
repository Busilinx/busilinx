<?php /* Smarty version 2.6.26, created on 2011-06-06 18:51:59
         compiled from CRM/Contact/Page/View/CustomDataFieldView.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'crmURL', 'CRM/Contact/Page/View/CustomDataFieldView.tpl', 46, false),)), $this); ?>
<tr class= "<?php if ($this->_tpl_vars['cd_edit']['collapse_display']): ?>hiddenElement<?php endif; ?>">
<?php if ($this->_tpl_vars['element']['options_per_line'] != 0): ?>
      <td class="label"><?php echo $this->_tpl_vars['element']['field_title']; ?>
</td>
      <td class="crm-custom_data">
                    <?php $_from = $this->_tpl_vars['element']['field_value']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['val']):
?>
              <?php echo $this->_tpl_vars['val']; ?>

          <?php endforeach; endif; unset($_from); ?>
      </td>
  <?php else: ?>
      <td class="label"><?php echo $this->_tpl_vars['element']['field_title']; ?>
</td>
      <?php if ($this->_tpl_vars['element']['field_type'] == 'File'): ?>
          <?php if ($this->_tpl_vars['element']['field_value']['displayURL']): ?>
              <td class="crm-custom_data crm-displayURL"><a href="javascript:imagePopUp('<?php echo $this->_tpl_vars['element']['field_value']['displayURL']; ?>
')" ><img src="<?php echo $this->_tpl_vars['element']['field_value']['displayURL']; ?>
" height = "<?php echo $this->_tpl_vars['element']['field_value']['imageThumbHeight']; ?>
" width="<?php echo $this->_tpl_vars['element']['field_value']['imageThumbWidth']; ?>
"></a></td>
          <?php else: ?>
              <td class="html-adjust crm-custom_data crm-fileURL"><a href="<?php echo $this->_tpl_vars['element']['field_value']['fileURL']; ?>
"><?php echo $this->_tpl_vars['element']['field_value']['fileName']; ?>
</a></td>
          <?php endif; ?>
      <?php elseif ($this->_tpl_vars['element']['field_data_type'] == 'ContactReference' && $this->_tpl_vars['element']['contact_ref_id']): ?>
                    <td class="html-adjust crm-custom-data crm-contact-reference">
              <a href="<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/contact/view','q' => "reset=1&cid=".($this->_tpl_vars['element']['contact_ref_id'])), $this);?>
" title="View contact"><?php echo $this->_tpl_vars['element']['field_value']; ?>
</a>
          </td>
      <?php else: ?>
          <td class="html-adjust crm-custom-data"><?php echo $this->_tpl_vars['element']['field_value']; ?>
</td>
      <?php endif; ?>
<?php endif; ?>
</tr>