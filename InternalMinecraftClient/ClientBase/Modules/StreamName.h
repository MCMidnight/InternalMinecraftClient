#pragma once

class StreamName : public Module {
public:
	StreamName(std::string cat) : Module(cat, "StreamName", "Client sidedly hide your minecraft username", 0x07) {
		// Constructor (Runs once on start up)
	}
	std::string OGName;
	void OnEnable(ClientInstance* ci, Actor* lp) {
		OGName = lp->Username;
	}
	void OnGameTick(Actor* a1) override {
		a1->Username = "Streaming";
	}
	void OnDisable(ClientInstance* ci, Actor* lp) {
		lp->Username = OGName;
	}
};