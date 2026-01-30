#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "TMPro_TMP_CharacterInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_CharacterInfo; };
#include "TMPro_TMP_WordInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_WordInfo; };
#include "TMPro_TMP_LinkInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_LinkInfo; };
#include "TMPro_TMP_LineInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_LineInfo; };
#include "TMPro_TMP_PageInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_PageInfo; };
#include "TMPro_TMP_MeshInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_MeshInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "TMPro_MaterialReference.h"
namespace Unity_TextMeshPro::TMPro { struct MaterialReference; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_TextInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* textComponent;
		int32_t characterCount;
		int32_t spriteCount;
		int32_t spaceCount;
		int32_t wordCount;
		int32_t linkCount;
		int32_t lineCount;
		int32_t pageCount;
		int32_t materialCount;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_CharacterInfo>* characterInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_WordInfo>* wordInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_LinkInfo>* linkInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_LineInfo>* lineInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_PageInfo>* pageInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_MeshInfo>* meshInfo;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_MeshInfo>* m_CachedMeshInfo;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector2 k_InfinityVectorPositive;
			UnityEngine_CoreModule::UnityEngine::Vector2 k_InfinityVectorNegative;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t characterCount);
		void _ctor(Unity_TextMeshPro::TMPro::TMP_Text* textComponent);
		void Clear();
		void ClearAllData();
		void ClearMeshInfo(bool updateMesh);
		void ClearAllMeshInfo();
		void ResetVertexLayout(bool isVolumetric);
		void ClearUnusedVertices(IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>* materials);
		void ClearLineInfo();
		void ClearPageInfo();
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_MeshInfo>* CopyMeshInfoVertexData();
		template <typename T> static void Resize(IL2CPP::Array<T>& array, int32_t size)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]&", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&array;
			params[1] = (intptr_t)&size;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> static void Resize(IL2CPP::Array<T>& array, int32_t size, bool isBlockAllocated)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]&", "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&array;
			params[1] = (intptr_t)&size;
			params[2] = (intptr_t)&isBlockAllocated;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void _cctor();
	};
}

