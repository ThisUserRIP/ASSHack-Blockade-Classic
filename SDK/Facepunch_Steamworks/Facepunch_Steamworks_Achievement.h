#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Image; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Achievement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		mscorlib::System::String* _Id_k__BackingField;
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::String* _Description_k__BackingField;
		bool _State_k__BackingField;
		mscorlib::System::DateTime _UnlockTime_k__BackingField;
		int32_t _iconId_k__BackingField;
		int32_t refreshCount;
		Facepunch_Steamworks::Facepunch::Steamworks::Image* _icon;
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		void set_Name(mscorlib::System::String* value);
		void set_Description(mscorlib::System::String* value);
		bool get_State();
		void set_State(bool value);
		void set_UnlockTime(mscorlib::System::DateTime value);
		void set_iconId(int32_t value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* client, int32_t index);
		bool Refresh();
	};
}

