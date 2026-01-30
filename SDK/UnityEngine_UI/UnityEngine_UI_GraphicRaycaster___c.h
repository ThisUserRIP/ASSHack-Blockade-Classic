#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_GraphicRaycaster.h"
namespace UnityEngine_UI::UnityEngine::UI { struct GraphicRaycaster; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct GraphicRaycaster___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::GraphicRaycaster___c* __9;
			mscorlib::System::Comparison_1<UnityEngine_UI::UnityEngine::UI::Graphic>* __9__27_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _Raycast_b__27_0(UnityEngine_UI::UnityEngine::UI::Graphic* g1, UnityEngine_UI::UnityEngine::UI::Graphic* g2);
	};
}

