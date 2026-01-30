#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Unity_Mathematics::Unity::Mathematics
{
	struct float3
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float z;
		void _ctor(float x, float y, float z);
		void _ctor(float v);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Multiply(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Multiply(Unity_Mathematics::Unity::Mathematics::float3 lhs, float rhs);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Multiply(float lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Addition(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Subtraction(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
		Unity_Mathematics::Unity::Mathematics::float3 get_yzx();
		bool Equals(Unity_Mathematics::Unity::Mathematics::float3 rhs);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Implicit(Unity_Mathematics::Unity::Mathematics::float3 v);
		static Unity_Mathematics::Unity::Mathematics::float3 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector3 v);
	};
	Unity_Mathematics::Unity::Mathematics::float3 operator*(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
	Unity_Mathematics::Unity::Mathematics::float3 operator*(Unity_Mathematics::Unity::Mathematics::float3 lhs, float rhs);
	Unity_Mathematics::Unity::Mathematics::float3 operator*(float lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
	Unity_Mathematics::Unity::Mathematics::float3 operator+(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
	Unity_Mathematics::Unity::Mathematics::float3 operator-(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs);
}

