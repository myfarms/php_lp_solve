<?php

function matrixmultiply($Array1, $Array2) {
        $rows2 = count($Array2);
        if (is_array($Array2[0])) {
            $dim2 = 2;
            $columns2 = count($Array2[0]);
        }
        else {
            $dim2 = 1;
            $columns2 = 1;
        }

        $rows1 = count($Array1);
        if (is_array($Array1[0])) {
            $dim1 = 2;
            $columns1 = count($Array1[0]);
        }
        else {
            $dim1 = 1;
            if ($rows2 == 1)
                $columns1 = 1;
            else {
                $columns1 = $rows1;
                $rows1 = 1;
            }
        }

        for($i=0; $i<$rows1; $i++){
                for($j=0; $j<$columns2; $j++){
                        $a = 0;
                        for($M=0;$M<$columns1;$M++){
                                if ($dim1 == 2)
                                    $b = $Array1[$i][$M];
                                else if ($rows2 == 1)
                                    $b = $Array1[$i];
                                else
                                    $b = $Array1[$M];
                                $c = $Array2[$M];
                                if ($dim2 == 2)
                                    $c = $c[$j];
                                $a = $a + $b * $c;
                        }
                        if ($dim2 == 2)
                            $ArrayMultipli[$i][$j] = $a;
                        else
                            $ArrayMultipli[$i] = $a;
                }
        }
        return $ArrayMultipli;
}

$x = matrixmultiply(Array(Array(-0.375, 0.0125), Array(1.375, -0.0125)), array(75, 4000));
print_r($x);

$P = matrixmultiply(Array(143, 60), $x);
print_r($P);

?>
