#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct Float4x
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float a;
		float b;
		float c;
		float d;
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		void _ctor(float a, float b, float c, float d);
		Rewired_Core::Rewired::Utils::Classes::Data::Float4x Clone();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x Clone(Rewired_Core::Rewired::Utils::Classes::Data::Float4x obj);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x get_Zero();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Equals(Rewired_Core::Rewired::Utils::Classes::Data::Float4x other);
		mscorlib::System::String* ToString();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x Add(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x Subtract(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x Divide(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x>* GetAdditionDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x>* GetSubtractionDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x>* GetMultiplicationDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x, Rewired_Core::Rewired::Utils::Classes::Data::Float4x>* GetDivisionDelegate();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector4 obj);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Implicit(Rewired_Core::Rewired::Utils::Classes::Data::Float4x obj);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float4x op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
	};
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float4x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float4x operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float4x value1, float value2);
}

