#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct BlockSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct BlockSetViewer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct BlockSetChooser : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::BlockSet*>* blockSetList;
		int32_t index;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		Assembly_CSharp::BlockSetViewer* viewer;
		void Start();
		void OnGUI();
		static int32_t DrawList(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<Assembly_CSharp::BlockSet*>* list, UnityEngine_CoreModule::UnityEngine::Vector2& scrollPosition);
		static bool DrawItem(mscorlib::System::String* name, bool selected);
		void _ctor();
	};
}

