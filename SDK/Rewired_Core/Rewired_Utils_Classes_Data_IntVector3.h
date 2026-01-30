#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct IntVector3 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t x;
		int32_t y;
		int32_t z;
		void _ctor();
		void _ctor(int32_t inX, int32_t inY, int32_t inZ);
		Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* Clone();
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, int32_t value2);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* value1, float value2);
	};
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntVector3* operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, int32_t value2);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector3& value1, float value2);
}

