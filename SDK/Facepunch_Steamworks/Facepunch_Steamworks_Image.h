#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUtils; };
#include "Facepunch_Steamworks_Color.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Color; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Image : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _Id_k__BackingField;
		int32_t _Width_k__BackingField;
		int32_t _Height_k__BackingField;
		IL2CPP::Array<uint8_t>* _Data_k__BackingField;
		bool _IsLoaded_k__BackingField;
		bool _IsError_k__BackingField;
		int32_t get_Id();
		void set_Id(int32_t value);
		int32_t get_Width();
		void set_Width(int32_t value);
		int32_t get_Height();
		void set_Height(int32_t value);
		IL2CPP::Array<uint8_t>* get_Data();
		void set_Data(IL2CPP::Array<uint8_t>* value);
		bool get_IsLoaded();
		void set_IsLoaded(bool value);
		void set_IsError(bool value);
		bool TryLoad(Facepunch_Steamworks::SteamNative::SteamUtils* utils);
		Facepunch_Steamworks::Facepunch::Steamworks::Color GetPixel(int32_t x, int32_t y);
		void _ctor();
	};
}

