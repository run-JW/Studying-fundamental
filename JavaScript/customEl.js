customElements.define("hello-world", class HelloWorld extends HTMLElement {
    isConnectedCallback() {
        this.innerHTML = 'Hello World!';
    }
});
