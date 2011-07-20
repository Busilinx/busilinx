<div class="location vcard"><div class="adr">
<?php echo $name; ?>
<?php if ($street) {?>
<div class="street-address"><?php
  echo $street;
  if ($additional) {
    echo ' '. $additional;
  }
?></div>
<?php }?>
<?php
  if ($city || $province || $postal_code) {
    $city_province_postal = array();

    if ($city) {
      $city_province_postal[] = '<span class="locality">'. $city .'</span>';
    }
    if ($province) {
      $city_province_postal[] = '<span class="region">'. $province_name .'</span>';
    }
    if ($postal_code) {
      $city_province_postal[] = '<span class="postal-code">'. $postal_code .'</span>';
    }

    echo implode(', ', $city_province_postal);
  }
?>
<?php if ($country_name) { ?>
<div class="country-name"><?php echo $country_name; ?></div>
<?php } ?>

</div></div>

