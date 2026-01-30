#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_UI::UnityEngine::UI { struct RectMask2D; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Clipping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Rect FindCullAndClipWorldRect(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::RectMask2D>* rectMaskParents, bool& validRect);
	};
}

