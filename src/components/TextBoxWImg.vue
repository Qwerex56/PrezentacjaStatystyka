<template>
  <div class="flex p-8 gap-8 bg-[#FFFFFFF2] rounded-[1rem]" :class="{getImgSizes, imgWidth}">
    <div class="w-auto h-full rounded-[0.5rem] overflow-hidden self-center">
      <slot name="image">
        image here
      </slot>
    </div>
    <div class="w-full">
      <div class="text-center font-medium text-3xl mb-4">
        <slot name="Subtitle">
          Subtitle
        </slot>
      </div>
      <div class="text-2xl">
        <slot name="content">
          Textbox items
        </slot>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
const props = defineProps({
  imgSite: {
    type: String,
    default: "left",
    required: false,
  },
  imgWidth: {
    type: String,
    default: "w-auto"
  }
});

const getImgSizes = () => {
  return props.imgSite == "left" ? "flex-row" : "flex-row-reverse"
}
</script>