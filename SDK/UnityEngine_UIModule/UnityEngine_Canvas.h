#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace UnityEngine_UIModule::UnityEngine { struct Canvas_WillRenderCanvases; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_RenderMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_AdditionalCanvasShaderChannels.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct Canvas : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* preWillRenderCanvases;
			UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* willRenderCanvases;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void add_preWillRenderCanvases(UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* value);
		static void remove_preWillRenderCanvases(UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* value);
		static void add_willRenderCanvases(UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* value);
		static void remove_willRenderCanvases(UnityEngine_UIModule::UnityEngine::Canvas_WillRenderCanvases* value);
		UnityEngine_UIModule::UnityEngine::RenderMode get_renderMode();
		void set_renderMode(UnityEngine_UIModule::UnityEngine::RenderMode value);
		bool get_isRootCanvas();
		UnityEngine_CoreModule::UnityEngine::Rect get_pixelRect();
		float get_scaleFactor();
		void set_scaleFactor(float value);
		float get_referencePixelsPerUnit();
		void set_referencePixelsPerUnit(float value);
		bool get_pixelPerfect();
		int32_t get_renderOrder();
		bool get_overrideSorting();
		void set_overrideSorting(bool value);
		int32_t get_sortingOrder();
		void set_sortingOrder(int32_t value);
		int32_t get_targetDisplay();
		int32_t get_sortingLayerID();
		void set_sortingLayerID(int32_t value);
		UnityEngine_UIModule::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels();
		void set_additionalShaderChannels(UnityEngine_UIModule::UnityEngine::AdditionalCanvasShaderChannels value);
		mscorlib::System::String* get_sortingLayerName();
		UnityEngine_UIModule::UnityEngine::Canvas* get_rootCanvas();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_renderingDisplaySize();
		UnityEngine_CoreModule::UnityEngine::Camera* get_worldCamera();
		static UnityEngine_CoreModule::UnityEngine::Material* GetDefaultCanvasMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* GetETC1SupportedCanvasMaterial();
		static void ForceUpdateCanvases();
		static void SendPreWillRenderCanvases();
		static void SendWillRenderCanvases();
		void _ctor();
		void get_pixelRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void get_renderingDisplaySize_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
	};
}

