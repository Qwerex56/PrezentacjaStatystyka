import { createApp } from 'vue'
import "./index.css"
import App from './App.vue'

import { createRouter, createWebHashHistory } from 'vue-router';
import routes from './router/routes';

const app = createApp(App);
const router = createRouter({
  history: createWebHashHistory(),
  routes: routes,
});

app.use(router);

app.mount('#app');
