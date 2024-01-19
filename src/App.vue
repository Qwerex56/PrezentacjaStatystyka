<script setup lang="ts">
import NavBar from './components/NavBar.vue';
import Footer from "./components/Footer.vue";
</script>

<template>
  <NavBar class="w-[90%] sticky mt-7">
    Rozkłady ciągłe prawdopodobieństwa
  </NavBar>
  <div class="py-7 flex flex-col gap-8 px-[5%]">
    <main class="flex flex-col gap-8">
      <RouterView/>
    </main>
  </div>
  <Footer class="place-self-end"/>
</template>

