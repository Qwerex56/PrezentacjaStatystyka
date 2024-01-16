<template>
  <div class="w-full flex place-self-center flex-row items-center place-content-between bg-[#FFFFFFF2] rounded-[1rem] h-20 text-[2rem] p-2 px-8">
    <div class="font-bold">
      Rozkład normalny
    </div>

    <div class="flex flex-row gap-4">
      <NavbarButton>Wstęp</NavbarButton>
      <NavbarButton>Zastosowania</NavbarButton>
      <NavbarButton>cos</NavbarButton>
      <NavbarButton>cos2</NavbarButton>
    </div>
  </div>
</template>

<script setup lang="ts">
import NavbarButton from "./NavbarButton.vue";
</script>