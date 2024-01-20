<template>
  <TextBox>
    <template #Subtitle>
      Dlaczego wybór tematu padł na rozkład normalny?
    </template>
    <template #content>
      Wybraliśmy ten temat, ponieważ jako przyszli inżynierowie, w codziennej pracy będziemy mieli styczność z różnymi problemami. 
      Rozkład normalny jest uniwersalnym narzędziem, które pozwala na modelowanie błędów pomiarowych, charakterystyk i tworzenie testów statystycznych. 
      Dzięki niemu będziemy mogli zoptymalizować i ulepszyć elementy naszej pracy, 
      tak aby finalny produkt był jak najbardziej jakościowy - oboje przykładamy do tego mocną uwagę, twierdząc, że jakość ponad ilość.
    </template>
  </TextBox>
  <TextBox>
    <template #Subtitle>
      Wstęp do rozkładów prawdopobieństwa
    </template>
    <template #content>
      Jednym z najprostszych ciągłych rozkładów w całej statystyce jest ciągły rozkład jednostajny,
      charakteryzujący się "płaską" funkcją gęstości, co oznacza, że prawdopodobieństwo jest jednostajne w zamkniętym przedziale.
      Choć zastosowania ciągłego rozkładu jednostajnego nie są tak liczne,
      to jest on świetnym wprowadzeniem do zrozumienia na czym polega rozkład normalny.
    </template>
  </TextBox>
  <TextBox :generate-text-area="false">
    <template #Subtitle>
    <p>Rozkład jednostajny</p>
    </template>
    <template #content>
      <p>Funkcja gęstości ciągłej zmiennej losowej o rozkładzie jednostajnym X na przedziale [A, B] jest równa</p>
      
      <img class="w-3/5 mx-auto py-4" src="/Funkcja-rozkładu-jednostajnego.png" alt="Obrazek z przykładowym wykresem rozładu jednostajnego">
      
      <p class="text-left">
        Funkcja gęstości zmiennej losowej o rozkładzie jednostajnym na przedziale ma kształt prostokąta o
        określonej podstawie i stałej wysokości, przez co rozkład ten nazywany jest często prostokątnym.
        Warto zwrócić uwagę, że przedział [A, B] nie musi być zawsze obustronnie domknięty, lecz może być również obustronnie otwarty - (A, B).
        Ze wzglęu na prostą postać funkcji gęstości dla rozkładu jednostajnego, prawdopodobieństwa są proste do obliczenia. Warto zauważyć,
        że zastosowanie tego rozkładu opiera się na założeniu, że prawdopodobieństwo znalezienia się w przedziale o stałej długości w obrębie [A, B] jest stałe.
      </p>

      <br>

      <img src="/wykres-rozkład-jednostajny.png" alt="rozkład-jednostajny" class="mx-auto">

      <p class="text-sm text-center">
        Funkcja gęstości zmiennej losowej na przedziale [1, 3]
      </p>
    </template>
  </TextBox>

  <TextBox>
    <template #Subtitle>
      Przykład
    </template>
    <template #content>
      <p>
        Załóżmy, że duży pokój konferencyjny w pewnej firmie można zarezerwować na nie więcej niż 4 godziny.
        Zarówno długie, jak i krótkie konferencje zdarzają się dość często. W rzeczywistości można założyć,
        że długość X konferencji ma rozkład jednostajny na przedziale [0, 4].
      </p>

      <br>
      <br>

      <img src="/rozkład-jednostajny-przykład.png" class="w-80 mx-auto">
      <br>

      <p>Prawdopodobieństwo, że dowolna konferencja potrwa co najmniej 3 godziny wynosi:</p>
      <br>

      <img src="/zadanie61.png" alt="zadanie61" class="w-80 mx-auto">
    </template>
  </TextBox>

  <TextBox>
    <template #Subtitle>
      Czym jest rozkład normalny
    </template>
    <template #content>
      Rozkład normalny to najważniejszy rozkład w teorii prawdopodobieństwa, jest to rozkład, którego krzywa nazywana jest
      krzywą normalną, a wykres jest w kształcie dzwona. Rozkład normalny z całkiem dobrym przybliżeniem opsiuje zjawiska występujące naturze.
      W 1733, Abraham DeMoivre opisał funkcją matematyczną rozkład normalny, funkcja ta jest bazą dla wielu teorii statystycznych.
      <br>

      <p>
        Zmienna losowa X, posiadająca rozkład o kształcie dzwona jest nazywana <strong>normalną zmienną losową</strong>. Matematyczne
        równanie normalnej zmiennej losowej jest zależne od dwóch parametrów μ (średnia) oraz σ (odchylenie standardowe),
        rozkład ten oznaczmy symbolem <strong>N(m, σ)</strong>
      </p>

      <img src="/wykres-rozkład-normalny.png" alt="wykres-rozklad normalny" class="w-[90%] mx-auto">
      
      <p>
        Do przedstawienia funckji rozkładu normalnego potzebujemy, tak naprawdę, tylko średniej i odchylenia standardowego.
        Na przykład, jeżeli μ=15 oraz σ=3, to będzie można obliczyć gęstość dla różnych wartości x.
      </p>
      
      <br>

      <p>
        Na poniższym wykresie naszkicowane są dwa wykresy rozkładu normalnego o tej samej wartości odchylenia, ale o różnej
        wartości średniej.
      </p>

      <br>
      <img src="/wykres-normalny-1.png" alt="wykres-normalny-1" class="w-[90%] mx-auto">
      <br>

      <p>
        Na poniższym wykresie naszkicowane są dwa wykresy rozkładu normalnego o różnej wartości odchylenia, ale o takiej samej
        wartości średniej. Możemy zauważyć że obie krzywe są wycentrowane na tej samej osi horyzontalnej, ale krzywa z
        większą wartością odchylenia standardowego jest niższa.
      </p>

      <br>
      <img src="/wykres-normalny-2.png" alt="wykres-normalny-2" class="w-[90%] mx-auto">
      
    </template>
  </TextBox>

  <TextBox>
    <template #Subtitle>
      Pole pod wykresem krzywej normalnej
    </template>

    <template #content>
      <p>
        Krzywa reprezentująca dowolny rozkład prawdopodobieństwa jest skonstruowana w taki sposób, 
        że prawdopodobieństwo wystąpienia określonej zmiennej losowej X w przedziale między dwoma punktami x<sub>1</sub> i x<sub>2</sub> 
        jest równoważne obszarowi pod krzywą, który jest obliczany właśnie dla tych wartości.
      </p>
      
      <br>
      <img src="/PolePodWykresem/Pole-1.png" alt="wykres 1">
      <br>
      
      <p>
        Zauważyliśmy wcześniej, że kształt krzywej rozkładu normalnego określany jest przez wartości 
        średniej oraz odchylenia standardowego. Stąd obszar pod krzywą również zależy od tych parametrów. 
        
        <br>

        Aby obliczyć to pole, stosujemy wzór rozkładu normalnego. W przypadku standardowego rozkładu normalnego, 
        korzystamy z wcześniej obliczonych wartości dostępnych w tablicy.
      </p>

      <br>
      <img src="/PolePodWykresem/pole-pod-wykresem-calka.png" alt="Wzór">
      <br>

      <p>
        Wzór ten bywa trudny do policzenia, dlatego można zrzutować wartość z<sub>1</sub> i z<sub>2</sub> 
        rozkładu normalnego na wartości standardowego rozkładu normalnego x<sub>1</sub> i x<sub>2</sub> .  
      </p>

      <br>
      <img src="/PolePodWykresem/zmiana-x-na-z.png" alt="wzór" class="w-2/12 mx-auto">
      <br>

      <p>
        Wtedy wartości x<sub>1</sub> i x<sub>2</sub>  można odczytać z tabeli i ułatwić sobie obliczenia. 
      </p>

      <br>

      <p>
        Czasami może też zdarzyć się tak że będziemy musieli znaleźć wartość odpowiadającą konkretnemu prawdopodobieństwu
      </p>

      <br>
      <img src="/PolePodWykresem/odwrocenie-wzoru.png" alt="wykres/wzór" class="w-6/12 mx-auto">
      <br>
    </template>
  </TextBox>

  <TextBox>
    <template #Subtitle>
      Przykład
    </template>
    
    <template #content>
      <img src="/PolePodWykresem/zadanie.png" alt="zadanie">
    </template>
  </TextBox>

  <TextBox>
    <template #Subtitle>
      Zastosowania rozkładu normalnego
    </template>
    
    <template #content>
      <p>
        Rozkład normalny znajduje wiele zastosowań w różnych dziedzinach przemysłu. Wykorzystuje się go do analizy jakości produkcji, 
        szczególnie w kontekście prognozowania oczekiwanej liczby wadliwych produktów. 
        Dodatkowo, rozkład normalny pozwala na ocenę prawdopodobieństwa, że określony produkt będzie funkcjonował przez dłuższy 
        lub krótszy okres niż przewidywany średni czas działania. W ten sposób, 
        rozkład normalny staje się niezbędnym narzędziem w procesie optymalizacji i kontroli jakości.

        <br>
        <br>

        Ten rozkład jest również wykorzystywany w szeregu zaawansowanych testów w innych dziedzinach:

        <br>
        <br>

        <ul>
          <li>
            <span class="italic font-semibold">Inteligencja</span> - mierzy się ją za pomocą testów inteligencji. Jest ona uważana za zmienną o rozkładzie normalnym. 
            Wyniki tych testów nie są jednak ciągłe, lecz skwantowane. 
          </li>

          <br>
          
          <li>
            <span class="italic font-semibold">Wzrost</span> - podobnie jak inteligencję, możemy przybliżyć wzrost do rozkładu normalnego. 
            Musimy jednak założyć, że oczekiwany wzrost człowieka wynosi 170 cm, 
            a odchylenie standardowe jest na tyle niskie, aby 
            prawdopodobieństwo wystąpienia ludzi o ujemnym wzroście było jak najmniejsze. 
          </li>
          
          <br>
          
          <li>
            <span class="italic font-semibold">Eliminacja błędów pomiarów</span> - podczas przeprowadzania określonych pomiarów, 
            napotykamy na wyniki, które rozpraszają się wokół pewnej wartości. Te wyniki obciążone są błędami. 
            Jeżeli uda nam się wyeliminować główne przyczyny tych błędów, wszystkie pozostałe błędy muszą wynikać z 
            sumy wielu czynników losowych. W efekcie, otrzymujemy rozkład normalny. 
          </li>
          
          <br>
          
          <li>
            <span class="italic font-semibold">Gry i symulacje komputerowe</span> - rozkład normalny jest często stosowany do generowania liczb losowych. 
            Takie generowanie liczb ma kluczowe znaczenie, na przykład, przy przydzielaniu nagród graczowi za pokonanie przeciwnika - 
            komputer może losowo zdecydować, czy gracz otrzyma rzadziej występujące czy częściej spotykane przedmioty. 
          </li>
        </ul>
      </p>
    </template>
  </TextBox>
</template>

<script setup lang="ts">
import TextBox from './TextBox.vue';
</script>