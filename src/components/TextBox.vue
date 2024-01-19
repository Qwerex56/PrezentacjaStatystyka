<template>
  <div class="p-4 bg-[#FFFFFFF2] rounded-[1rem]">
    <div class="text-center font-medium text-2xl mb-4 font-semibold" >
      <slot name="Subtitle">
        Subtitle
      </slot>
    </div>
    <div class="text-xl">
      <slot name="content">
        Textbox items
      </slot>
    </div>
  </div>
</template>