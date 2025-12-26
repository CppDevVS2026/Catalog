#include <stdio.h>
#include <stdlib.h>
#define SLOTS 5
#define CASH 10.99

typedef struct Wallet {
  size_t size;
  float* slot;

}wallet_t;
float wallet_balance(wallet_t *wallet) {
  float total = 0.0f;
  for (size_t i=0; i<wallet->size; ++i)
    total += wallet->slot[i];
  return total;
}

void init_wallet(wallet_t *wallet) {
  wallet->size = SLOTS;
  wallet->slot = malloc(SLOTS*sizeof(float));
  for (size_t i=0; i < SLOTS; ++i)
    wallet->slot[i]=CASH;
}

int main(void) {
  wallet_t my_wallet;
  init_wallet(&my_wallet);
  printf("Slots: %llu\nCash: $%.2f\n", my_wallet.size, wallet_balance(&my_wallet));
  for (size_t i = 0; i < my_wallet.size; ++i)
    printf("Slot[%llu] has $%.2f\n", i, my_wallet.slot[i]);

  free(my_wallet.slot);
  my_wallet.slot = nullptr;
  return 0;
}

