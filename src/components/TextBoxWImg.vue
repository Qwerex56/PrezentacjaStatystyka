<template>
  <div class="flex p-8 gap-8 bg-[#FFFFFFF2] rounded-[1rem]" :class="[getImgPlace()]">
    <div class="h-full rounded-[0.5rem] overflow-hidden self-center" :class='[getImgWidth()]'>
      <slot name="image">
      </slot>
    </div>
    <div class="w-full" v-if="generateTextArea">
      <div class="text-center font-medium text-3xl mb-4">
        <slot name="Subtitle">
        </slot>
      </div>
      <div class="text-2xl">
        <slot name="content">
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
  generateTextArea: {
    type: Boolean,
    default: true,
  }
});

const getImgPlace = () => {
  return props.imgSite == "left" ? "flex-row" : "flex-row-reverse"
}

const getImgWidth = () => {
  return props.generateTextArea? "w-[35%]" : "w-auto";
}
</script>