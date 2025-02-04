#pragma once

class ArrayList : public Module {
public:
	ArrayList(std::string cat) : Module(cat, "ArrayList", "Display list of modules that are enabled", 0x07, true) {};

	void OnFrameRender(RenderUtils* ctx) override {
		int offset = 0;
		for (int i = 0; i < vMods.size(); ++i) {
			if (!vMods[i]->enabled) continue;

			auto vText1 = TextHolder(vMods[i]->name);

			Vector2 strPos = Vector2(0, 0);

			strPos.x = ctx->guiData->scaledResolution.x - ctx->ctx->getLineLength(ctx->font, &vText1, 1) - 0;
			strPos.y = offset * 20.f;

			Vector2 boxPos = Vector2(0, 0);

			boxPos.x = ctx->guiData->scaledResolution.x - ctx->ctx->getLineLength(ctx->font, &vText1, 1) - 1;
			boxPos.y = offset * 10.f;

			ctx->DrawString(strPos, _RGB(200, 200, 200), vText1, ctx->font);
			ctx->Draw(Vector2(boxPos.x - 2, boxPos.y), Vector2(1.8f, 10), _RGB(0, 30, 255, 69));
			ctx->Draw(boxPos, Vector2(ctx->ctx->getLineLength(ctx->font, &vText1, 1) + 1, 10), _RGB(33, 33, 33, 69));

			offset++;
		}
	}
};