#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace Unity_Mathematics::Unity::Mathematics
{
	struct uint3
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t x;
		uint32_t y;
		uint32_t z;
		void _ctor(uint32_t x, uint32_t y, uint32_t z);
		static Unity_Mathematics::Unity::Mathematics::uint3 op_Multiply(Unity_Mathematics::Unity::Mathematics::uint3 lhs, Unity_Mathematics::Unity::Mathematics::uint3 rhs);
		bool Equals(Unity_Mathematics::Unity::Mathematics::uint3 rhs);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
	};
	Unity_Mathematics::Unity::Mathematics::uint3 operator*(Unity_Mathematics::Unity::Mathematics::uint3 lhs, Unity_Mathematics::Unity::Mathematics::uint3 rhs);
}

