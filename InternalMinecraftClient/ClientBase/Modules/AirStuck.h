#pragma once

class AirStuck : public Module {
public:
	AirStuck(std::string cat) : Module(cat, "AirStuck", 0x07) {};

	void OnTick(ClientInstance* ci) override {
		auto lp = ci->localPlayer;
		lp->Velocity = Vector3(0, 0, 0);
	};
};