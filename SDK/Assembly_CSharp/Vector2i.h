#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct Vector2i
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t x;
		int32_t y;
		void _ctor(int32_t x, int32_t y);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		mscorlib::System::String* ToString();
		static Assembly_CSharp::Vector2i Min(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static Assembly_CSharp::Vector2i Max(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static bool op_Equality(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static bool op_Inequality(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static Assembly_CSharp::Vector2i op_Subtraction(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static Assembly_CSharp::Vector2i op_Addition(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
		static void _cctor();
	};
	bool operator==(Assembly_CSharp::Vector2i& a, Assembly_CSharp::Vector2i& b);
	bool operator!=(Assembly_CSharp::Vector2i& a, Assembly_CSharp::Vector2i& b);
	Assembly_CSharp::Vector2i operator-(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
	Assembly_CSharp::Vector2i operator+(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b);
}

