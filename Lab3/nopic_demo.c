/* Демонстрация ошибки сборки .so из не-PIC кода (см. Этап 2, вопрос 1) */
int call_counter = 0;

int* get_counter_addr(void) {
    call_counter++;
    return &call_counter;
}
