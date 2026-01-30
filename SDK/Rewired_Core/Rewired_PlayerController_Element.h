#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };
namespace Rewired_Core::Rewired { struct Player; };
#include "Rewired_PlayerController_Element_Type.h"

namespace Rewired_Core::Rewired
{
	struct PlayerController_Element : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::PlayerController* mMDlSZNQItaeWkrYWjJXeWZyHTD;
		bool HhYbEceLUBoHMZEdyCsUgJhTeAd;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		mscorlib::System::String* zChKajbhRtCfjSPFRgSGEUIuXlt;
		struct StaticFields
		{
			bool defaultEnabled;
			IL2CPP::Array<int32_t>* sXycuFIcxjGOJnbHDrwGUukbNHh;
			IL2CPP::Array<int32_t>* ihoPqmbwTkvKqrRJanrQsqjLEgU;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_Element_Definition* definition);
		Rewired_Core::Rewired::Player* get_player();
		bool get_selfAndParentEnabled();
		bool get_isMemberElement();
		void set_isMemberElement(bool value);
		bool get_enabled();
		void set_enabled(bool value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		void Update();
		void EnabledStateChanged(bool state);
		static bool IsTypeWithSource(Rewired_Core::Rewired::PlayerController_Element_Type type);
		static bool IsCompoundType(Rewired_Core::Rewired::PlayerController_Element_Type type);
		static int32_t GetMaxElementCount(Rewired_Core::Rewired::PlayerController_Element_Type type);
		static mscorlib::System::String* GetElementTitle(Rewired_Core::Rewired::PlayerController_Element_Type type, int32_t index);
		static Rewired_Core::Rewired::PlayerController_Element_Definition* CreateDefinition(Rewired_Core::Rewired::PlayerController_Element_Type type);
	};
}

