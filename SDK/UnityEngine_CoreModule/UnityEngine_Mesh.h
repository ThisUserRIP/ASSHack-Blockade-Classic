#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_IndexFormat.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_VertexAttributeDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VertexAttributeDescriptor; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Rendering_MeshUpdateFlags.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_MeshTopology.h"
namespace mscorlib::System { struct Array; };
#include "UnityEngine_Rendering_VertexAttribute.h"
#include "UnityEngine_Rendering_VertexAttributeFormat.h"
#include "UnityEngine_Rendering_SubMeshDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SubMeshDescriptor; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Mesh : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::Mesh* mono);
		void _ctor();
		void set_indexFormat(UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat value);
		void SetVertexBufferParamsFromArray(int32_t vertexCount, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);
		void InternalSetVertexBufferData(int32_t stream, intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		int32_t GetVertexAttributeCountImpl();
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);
		uint32_t GetIndexCountImpl(int32_t submesh);
		IL2CPP::Array<int32_t>* GetTrianglesImpl(int32_t submesh, bool applyBaseVertex);
		IL2CPP::Array<int32_t>* GetIndicesImpl(int32_t submesh, bool applyBaseVertex);
		void SetIndicesImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, mscorlib::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex);
		void SetIndicesNativeArrayImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, intptr_t indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex);
		void PrintErrorCantAccessChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute ch);
		bool HasVertexAttribute(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute attr);
		void SetArrayForChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		mscorlib::System::Array* GetAllocArrayFromChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);
		void GetArrayFromChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values);
		bool get_canAccess();
		int32_t get_vertexCount();
		int32_t get_subMeshCount();
		void set_subMeshCount(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		void set_bounds(UnityEngine_CoreModule::UnityEngine::Bounds value);
		void ClearImpl(bool keepVertexLayout);
		void RecalculateBoundsImpl(UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void MarkDynamicImpl();
		void UploadMeshDataImpl(bool markNoLongerReadable);
		static UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);
		static int32_t DefaultDimensionForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel);
		template <typename T> IL2CPP::Array<T>* GetAllocArrayFromChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllocArrayFromChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&channel;
			params[1] = (intptr_t)&format;
			params[2] = (intptr_t)&dim;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		template <typename T> IL2CPP::Array<T>* GetAllocArrayFromChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllocArrayFromChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&channel;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		void SetSizedArrayForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		template <typename T> void SetArrayForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, IL2CPP::Array<T>* values, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetArrayForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32", GetGenericTypeName<T>() + (std::string)"[]", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&channel;
			params[1] = (intptr_t)&format;
			params[2] = (intptr_t)&dim;
			params[3] = (intptr_t)values;
			params[4] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetArrayForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, IL2CPP::Array<T>* values, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetArrayForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", GetGenericTypeName<T>() + (std::string)"[]", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&channel;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetListForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetListForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32", "System.Collections.Generic.List`1<T>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&channel;
			params[1] = (intptr_t)&format;
			params[2] = (intptr_t)&dim;
			params[3] = (intptr_t)values;
			params[4] = (intptr_t)&start;
			params[5] = (intptr_t)&length;
			params[6] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetListForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, mscorlib::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetListForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "System.Collections.Generic.List`1<T>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&channel;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&start;
			params[3] = (intptr_t)&length;
			params[4] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void GetListForChannel(mscorlib::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, int32_t dim)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetListForChannel", std::vector<std::string> { "System.Collections.Generic.List`1<T>", "System.Int32", "UnityEngine.Rendering.VertexAttribute", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)buffer;
			params[1] = (intptr_t)&capacity;
			params[2] = (intptr_t)&channel;
			params[3] = (intptr_t)&dim;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void GetListForChannel(mscorlib::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, int32_t dim, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat channelType)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetListForChannel", std::vector<std::string> { "System.Collections.Generic.List`1<T>", "System.Int32", "UnityEngine.Rendering.VertexAttribute", "System.Int32", "UnityEngine.Rendering.VertexAttributeFormat" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)buffer;
			params[1] = (intptr_t)&capacity;
			params[2] = (intptr_t)&channel;
			params[3] = (intptr_t)&dim;
			params[4] = (intptr_t)&channelType;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_vertices();
		void set_vertices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_normals();
		void set_normals(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* get_tangents();
		void set_tangents(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* get_uv();
		void set_uv(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void set_uv2(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* get_colors();
		void set_colors(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>* get_colors32();
		void set_colors32(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>* value);
		void SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices);
		void SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);
		void SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals);
		void SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);
		void SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents);
		void SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);
		void SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors);
		void SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors, int32_t start, int32_t length);
		void SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		template <typename T> void SetUvsImpl(int32_t uvIndex, int32_t dim, mscorlib::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUvsImpl", std::vector<std::string> { "System.Int32", "System.Int32", "System.Collections.Generic.List`1<T>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&uvIndex;
			params[1] = (intptr_t)&dim;
			params[2] = (intptr_t)uvs;
			params[3] = (intptr_t)&start;
			params[4] = (intptr_t)&length;
			params[5] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs);
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs);
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);
		void SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		template <typename T> void GetUVsImpl(int32_t uvIndex, mscorlib::System::Collections::Generic::List_1<T>* uvs, int32_t dim)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUVsImpl", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<T>", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&uvIndex;
			params[1] = (intptr_t)uvs;
			params[2] = (intptr_t)&dim;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void GetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs);
		int32_t get_vertexAttributeCount();
		void SetVertexBufferParams(int32_t vertexCount, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);
		template <typename T> void SetVertexBufferData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertexBufferData", std::vector<std::string> { "Unity.Collections.NativeArray`1<T>", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&data;
			params[1] = (intptr_t)&dataStart;
			params[2] = (intptr_t)&meshBufferStart;
			params[3] = (intptr_t)&count;
			params[4] = (intptr_t)&stream;
			params[5] = (intptr_t)&flags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void PrintErrorCantAccessIndices();
		bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);
		bool CheckCanAccessSubmeshTriangles(int32_t submesh);
		bool CheckCanAccessSubmeshIndices(int32_t submesh);
		IL2CPP::Array<int32_t>* get_triangles();
		void set_triangles(IL2CPP::Array<int32_t>* value);
		IL2CPP::Array<int32_t>* GetIndices(int32_t submesh);
		IL2CPP::Array<int32_t>* GetIndices(int32_t submesh, bool applyBaseVertex);
		uint32_t GetIndexCount(int32_t submesh);
		void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);
		void SetTrianglesImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, mscorlib::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length, bool calculateBounds, int32_t baseVertex);
		void SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t submesh);
		void SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t submesh);
		void SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetIndices(IL2CPP::Array<int32_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);
		void SetIndices(IL2CPP::Array<int32_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetIndices(IL2CPP::Array<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetIndices(IL2CPP::Array<uint16_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		void SetIndices(IL2CPP::Array<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);
		template <typename T> void SetIndices(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "Unity.Collections.NativeArray`1<T>", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&indices;
			params[1] = (intptr_t)&topology;
			params[2] = (intptr_t)&submesh;
			params[3] = (intptr_t)&calculateBounds;
			params[4] = (intptr_t)&baseVertex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetIndices(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "Unity.Collections.NativeArray`1<T>", "System.Int32", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&indices;
			params[1] = (intptr_t)&indicesStart;
			params[2] = (intptr_t)&indicesLength;
			params[3] = (intptr_t)&topology;
			params[4] = (intptr_t)&submesh;
			params[5] = (intptr_t)&calculateBounds;
			params[6] = (intptr_t)&baseVertex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Clear();
		void RecalculateBounds();
		void RecalculateBounds(UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags);
		void MarkDynamic();
		void UploadMeshData(bool markNoLongerReadable);
		void GetVertexAttribute_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor& ret);
		void GetSubMesh_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor& ret);
		void get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret);
		void set_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& value);
	};
}

