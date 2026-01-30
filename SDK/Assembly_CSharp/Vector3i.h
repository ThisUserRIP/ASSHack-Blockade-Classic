#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct Vector3i
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t x;
		int32_t y;
		int32_t z;
		void _ctor(int32_t x, int32_t y, int32_t z);
		void _ctor(int32_t x, int32_t y);
		static int32_t DistanceSquared(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		int32_t DistanceSquared(Assembly_CSharp::Vector3i v);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		mscorlib::System::String* ToString();
		static Assembly_CSharp::Vector3i Min(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static Assembly_CSharp::Vector3i Max(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static bool op_Equality(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static bool op_Inequality(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static Assembly_CSharp::Vector3i op_Subtraction(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static Assembly_CSharp::Vector3i op_Addition(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Implicit(Assembly_CSharp::Vector3i v);
		static void _cctor();
	};
	bool operator==(Assembly_CSharp::Vector3i& a, Assembly_CSharp::Vector3i& b);
	bool operator!=(Assembly_CSharp::Vector3i& a, Assembly_CSharp::Vector3i& b);
	Assembly_CSharp::Vector3i operator-(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
	Assembly_CSharp::Vector3i operator+(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b);
}

