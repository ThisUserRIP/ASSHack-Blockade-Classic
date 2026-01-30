#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UI_CanvasUpdate.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ICanvasElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		void LayoutComplete();
		void GraphicUpdateComplete();
		bool IsDestroyed();
	};
}

