<?php /* Smarty version 2.6.26, created on 2011-07-08 14:19:00
         compiled from CRM/common/action.tpl */ ?>
<?php echo '
<script type="text/javascript">
cj(\'#crm-container\')
    .live(\'click\', function(event) {
        if (cj(event.target).is(\'.btn-slide\')) {
            cj(event.target).children().show();
            cj(event.target).addClass(\'btn-slide-active\');
        } else {
            cj(\'.btn-slide .panel\').hide();
            cj(\'.btn-slide-active\').removeClass(\'btn-slide-active\');	
        } 
});
</script>
'; ?>
