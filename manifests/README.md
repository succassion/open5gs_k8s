# Open5GS Kubernetes

### Namespace
: open5gs-k8s
```
$ kubectl apply -f 00_namespace.yaml
$ kubectl get ns

# kubectl delete -f 00_namespace.yaml
```

### Mongodb
: Subscriber Data
- Address : 127.0.0.1

### MME (4G/5G NSA Core)
: Mobility Management Entity.
| Address : s1ap = 127.0.0.2 :36412 for S1-MME
|         : gtpc = 127.0.0.2 :2123  for S11
|         : frDi = 127.0.0.2 :3868  for S6a

### SGWC (4G/5G NSA Core)
: Serving Gateway Control Plane.
| Address : gtpc = 127.0.0.3 :2123 for S11
|         : pfcp = 127.0.0.3 :8805 for Sxa

### SMF (4G/5G NSA Core, 5G SA Core)
- PGWC(Packet Gateway Control Plane) component contained in Open5GS SMF
: Session Management Function.

### AMF (5G SA Core)
: Access and Mobility Management Function.

### SGWU (4G/5G NSA Core)
: Serving Gateway User Plane.

### UPF (4G/5G NSA Core, 5G SA Core)
- PGWU(Packet Gateway User Plane) component contained in Open5GS UPF
: User Plane Function.

### HSS (4G/5G NSA Core)
: Home Subscriber Server.

### PCRF (4G/5G NSA Core)
: Policy and Charging Rules Function.

### NRF (5G SA Core)
: NF Repository Function.

### AUSF (5G SA Core)
: Authentication Server Function.

### UDM (5G SA Core)
: Unified Data Management.

### PCF (5G SA Core)
: Policy and Charging Function.

### NSSF (5G SA Core)
: Network Slice Selection Function.

### BSF (5G SA Core)
: Binding Support Function.

### UDR (5G SA Core)
: Unified Data Repository.

### WebUI
: Port - 3000
: ID/PW - admin/1423
