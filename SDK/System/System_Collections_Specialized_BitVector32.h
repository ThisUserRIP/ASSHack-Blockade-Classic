#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System::System::Collections::Specialized
{
	struct BitVector32
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t data;
		bool get_Item(int32_t bit);
		void set_Item(int32_t bit, bool value);
		static int32_t CreateMask();
		static int32_t CreateMask(int32_t previous);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		static mscorlib::System::String* ToString(System::Collections::Specialized::BitVector32 value);
		mscorlib::System::String* ToString();
	};
}

