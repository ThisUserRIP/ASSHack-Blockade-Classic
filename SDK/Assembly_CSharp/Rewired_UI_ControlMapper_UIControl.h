#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIControl : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* title;
		int32_t _id;
		bool _showTitle;
		struct StaticFields
		{
			int32_t _uidCounter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_id();
		void Awake();
		bool get_showTitle();
		void set_showTitle(bool value);
		void SetCancelCallback(mscorlib::System::Action* cancelCallback);
		static int32_t GetNextUid();
		void _ctor();
	};
}

