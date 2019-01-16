#include <iostream>
#include "../src/nomad.h"

using namespace nomad;

struct Position : Component<Position> {
  Position(float x): x(x) {};
  float x;
};

struct Wind : System {
  Wind() {
    signature.addComponent<Position>();
  }

  void update(int dt) {
    for (auto & entity : registeredEntities) {
      ComponentHandle<Position> position;
      parentWorld->unpack(entity, position);

      // Move 1 every second
      position->x += 1.0f * (dt / 1000.0f);

      // Print entity position
      std::cout << "Entity " << entity.id << ": " << position->x << std::endl;
    }
  }
};

int main() {
  // Create the basic building blocks
  auto entityManager = new EntityManager();
  auto world = new World(entityManager);

  // Add systems
  auto wind = new Wind();
  world->addSystem(wind);

  // Initialize game
  world->init();

  // Add an entity with a position
  auto tumbleweed = world->createEntity();
  tumbleweed.addComponent(Position(0));

  // Run game for "1 second at 50fps"
  for(int i = 0; i < 50; i++) {
    world->update(20);
  }
}
