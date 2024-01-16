<script setup lang="ts">
import NavBar from './components/NavBar.vue';
</script>

<template>
  <div class="py-7 flex flex-col gap-8 px-[5%]">
    <NavBar>
      Other name
    </NavBar>
    <main class="flex flex-col gap-8">
      <RouterView />
    </main>
    <!-- Footer -->
  </div>
</template>

