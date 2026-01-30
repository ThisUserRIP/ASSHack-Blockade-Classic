#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct RectMask2D; };
namespace UnityEngine_UI::UnityEngine::UI { struct IClippable; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct MaskUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Notify2DMaskStateChanged(UnityEngine_CoreModule::UnityEngine::Component* mask);
		static void NotifyStencilStateChanged(UnityEngine_CoreModule::UnityEngine::Component* mask);
		static UnityEngine_CoreModule::UnityEngine::Transform* FindRootSortOverrideCanvas(UnityEngine_CoreModule::UnityEngine::Transform* start);
		static int32_t GetStencilDepth(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Transform* stopAfter);
		static bool IsDescendantOrSelf(UnityEngine_CoreModule::UnityEngine::Transform* father, UnityEngine_CoreModule::UnityEngine::Transform* child);
		static UnityEngine_UI::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable);
		static void GetRectMasksForClip(UnityEngine_UI::UnityEngine::UI::RectMask2D* clipper, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::RectMask2D>* masks);
		void _ctor();
	};
}

