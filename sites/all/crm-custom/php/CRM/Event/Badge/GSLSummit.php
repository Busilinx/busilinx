<?php

require_once 'CRM/Event/Badge.php';
require_once 'CRM/Utils/Date.php';

class CRM_Event_Badge_GSLSummit extends CRM_Event_Badge {
    
    function __construct() {
        parent::__construct();
        $pw=210; $ph=297;// A4
        $h=55; $w=90;
        $this->format = array( 'name' => 'Sigel 3C', 'paper-size' => 'A4', 'metric' => 'mm', 'lMargin' => 0,
                              'tMargin' => 0, 'NX' => 2, 'NY' => 5, 'SpaceX' => 0, 'SpaceY' => 0,
                              'width' => $w, 'height' => $h, 'font-size' => 12 );
        $this->lMarginLogo = 20;
        $this->tMarginName = 20;
        //      $this->setDebug ();
    }
    
    public function generateLabel( $participant ) {
        $x = $this->pdf->GetAbsX();
        $y = $this->pdf->GetY();
        $this->printBackground (true);
        $this->pdf->SetLineStyle( array('width' => 0.1, 'cap' => 'round', 'join' => 'round', 'dash' => '2,2', 'color' => array(0, 0, 200 ) ) );
                
        $this->pdf->SetFontSize(22);
        $this->pdf->MultiCell ( $this->pdf->width, 10, $participant['first_name']. " ".$participant['last_name'], $this->border, "C", 0, 1, $x, $y+$this->tMarginName );
        $this->pdf->SetFontSize(18);
        $this->pdf->MultiCell ( $this->pdf->width, 0, $participant['current_employer'], $this->border, "C", 0, 1, $x, $this->pdf->getY() );
    }
    
}

